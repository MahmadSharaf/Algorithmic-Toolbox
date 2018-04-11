# Uses python3
import sys

def fibonacci_partial_sum_naive(from_, to):
    sum = 0

    current = 0
    next  = 1

    for i in range(to + 1):
        if i >= from_:
            sum += current

        current, next = next, current + next

    return sum % 10

def get_pisano_sequence(n):
    '''This Function calculates the Pisano Period'''
    arr=[0,1]
    current=1
    previous=1
    index=2
    while True:
        new=(arr[index-1]+arr[index-2])
        arr.append(new%n)
        previous=current
        current=arr[index]
        index+=1
        if (current==1 and previous==0):
            arr.pop()
            arr.pop()
            break
    return arr

def fibonacci_partial_sum_fast(a, b):
    arr=get_pisano_sequence(10)
    sum=0
    for i in range(a%60,b%60+1):
        sum=sum+arr[i]
    return sum%10

if __name__ == '__main__':
    input = sys.stdin.read();
    from_, to = map(int, input.split())
    print(fibonacci_partial_sum_fast(from_, to))

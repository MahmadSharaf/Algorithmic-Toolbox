# Uses python3
import sys

# def fibonacci_sum_naive(n):
#     if n <= 1:
#         return n
#
#     previous = 0
#     current  = 1
#     sum      = 1
#
#     for _ in range(n - 1):
#         previous, current = current, previous + current
#         sum += current
#
#     return sum % 10

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

def fibonacci_sum_fast(n):
    arr=get_pisano_sequence(10)
    sum=0
    for i in range(n%60+1):
        sum=sum+arr[i]
    return sum%10

if __name__ == '__main__':
    input = sys.stdin.read()
    n = int(input)
    print(fibonacci_sum_fast(n))

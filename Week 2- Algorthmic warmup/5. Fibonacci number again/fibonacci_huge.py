# Uses python3
import sys

def get_fibonacci_huge_naive(n, m):
    if n <= 1:
        return n

    previous = 0
    current  = 1

    for _ in range(n - 1):
        previous, current = current, previous + current

    return current % m
def get_pisano_sequence(m):
    '''This Function calculates the Pisano Period'''
    arr=[0,1]
    current=1
    previous=1
    index=2
    while True:
        new=(arr[index-1]+arr[index-2])
        arr.append(new%m)
        previous=current
        current=arr[index]
        index+=1
        if (current==1 and previous==0):
            arr.pop()
            arr.pop()
            break
    return arr


def calc_fib_fast(n):
    ar=[]
    ar.append(0)
    ar.append(1)
    for i in range(2,n+1):
        ar.append(ar[i-1]+ar[i-2])
    print(ar)
    return ar[n]

if __name__ == '__main__':
    input = sys.stdin.read();
    n, m = map(int, input.split())
    Pisano=get_pisano_sequence(int(m))
    period=len(Pisano)
    # print(Pisano)
    print(Pisano[n%period])

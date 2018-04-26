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
        new=(arr[index-1]+arr[index-2]) # Calculates the next Fibonaccii number
        arr.append(new%m)               # Saves the remaining with respect to Value provided
        previous=current                # Keeps the values of the variables "Previous" and
        current=arr[index]              # "Current" updated to be used as flags
        index+=1                        # 
        if (current==1 and previous==0):# Checks the occurence of 0 followed by 1 which indicates the
            arr.pop()                   # beginning of a repeatation and therefore remove them of
            arr.pop()                   # the array
            break
    return arr


if __name__ == '__main__':
    input = sys.stdin.read();
    n, m = map(int, input.split())
    Pisano=get_pisano_sequence(int(m))  # 
    period=len(Pisano)                  # The length of Pisano Sequence
    # print(Pisano)
    print(Pisano[n%period])             # As we have the sequence we can get Fn mod m by fetching the corresponding index which equals to
                                        # Fn mod the Pisano period

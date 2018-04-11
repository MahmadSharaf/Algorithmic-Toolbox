# Uses python3
import sys
# import numpy as np


# def get_fibonacci_last_digit_naive(n):
#     if n <= 1:
#         return n
#
#     previous = 0
#     current  = 1
#
#     for _ in range(n - 1):
#         previous, current = current, previous + current
#
#     return current % 10

def get_fibonacci_last_digit_fast(n):
    if n <= 1:
        return n

    previous = 0
    current  = 1

    for _ in range(n - 1):
        previous, current = current, (previous + current)%10
    return current

def get_fibonacci_last_digit_repetitive(n):
    ar=[]
    for i in range(60):
        ar.insert(i,get_fibonacci_last_digit_fast(i))
    return ar[n%60]
if __name__ == '__main__':

    # #Stress Test
    # while(True):
    #     ran_num=np.random.randint(1,1000)
    #     res1=get_fibonacci_last_digit_fast(ran_num)
    #     res2=get_fibonacci_last_digit_repetitive(ran_num)
    #     if (res1!=res2):
    #         print("Wrong Answer \n res1=",res1,"and res2=",res2)
    #         break
    #     else: print("OK")

    input = sys.stdin.read()
    print(get_fibonacci_last_digit_fast(int(input)))

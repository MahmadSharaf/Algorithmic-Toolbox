# Uses python3
import sys
# import time
# import numpy as np

def gcd_naive(a, b):
    current_gcd = 1
    for d in range(2, min(a, b) + 1):
        if a % d == 0 and b % d == 0:
            if d > current_gcd:
                current_gcd = d
    return current_gcd

def gcd_effiecent(a, b):
    num=a
    den=b
    mod=num%den
    for x in range(a+b):
        if (mod==0):
            return den
            break
        else:
            num=den
            den=mod
            mod=num%den


if __name__ == "__main__":
    # ## Stress Test
    # while (True):
    #     ran_num1=np.random.randint(1,2*10E5, dtype='int64')
    #     ran_num2=np.random.randint(1,2*10E5, dtype='int64')
    #     print(ran_num1,ran_num2)
    #     res1=gcd_effiecent(ran_num1,ran_num2)
    #     res2=gcd_naive(ran_num1,ran_num2)
    #     if (res1!=res2):
    #         print("Wrong Answer \n fast=",res1,"and naive=",res2)
    #         break
    #     else: print("OK")
    ## Code

    input = sys.stdin.read()
    # start_time = time.time()
    a, b = map(int, input.split())
    # print(gcd_naive(a, b))
    # end_time=time.time()
    # print("--- %s seconds ---" % (end_time - start_time))
    print(gcd_effiecent(a, b))
    # print("--- %s seconds ---" % (time.time() - end_time))

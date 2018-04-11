# Uses python3
#import numpy as np

def MaxPairwiseProductNaive(a):
    n= len(a)
    result = 0
#    index1,index2=0,0
    for i in range(0, n):
        for j in range(i+1, n):
            if a[i]*a[j] > result:
                result = a[i]*a[j]
#                index1,index2=i,j
#    print("Naive: num1:",a[index1],"num2:",a[index2])
    return result

def MaxPairwiseProductFast(a):
    num1,num2,index=0,0,0
    n=len(a)
    for i in range(n):
        if(a[i]>=num1):
            index=i
            num1=a[i]
    for i in range(n):
        if(a[i]>=num2 and i!=index):
            num2=a[i]
#    print ("Fast: num1:",num1,"num2:",num2)
    return num1*num2

# Stress Test
#while(True):
#    ran_n=np.random.randint(2,1000,1,dtype='int64')
#    print(ran_n)
#    ran_arr=np.random.randint(1,100000,ran_n,dtype='int64')
#    print(ran_arr)
#    res1=MaxPairwiseProductNaive(ran_arr)
#    res2=MaxPairwiseProductFast(ran_arr)
#
#    if (res1!=res2):
#        print("Wrong Answer")
#        print(res1,res2)
#        break
#    else: print("OK")

# Main Program
n = int(input())
a = [int(x) for x in input().split()]
assert(len(a) == n)

print(MaxPairwiseProductFast(a))

# Uses python3
import sys

def gcd_effiecent(a, b):
    num=a
    den=b
    mod=num%den
    for x in range(a+b):
        if (mod==0):
            return int(den)
            break
        else:
            num=den
            den=mod
            mod=num%den

def lcm_naive(a, b):
    for l in range(1, a*b + 1):
        if l % a == 0 and l % b == 0:
            return l

    return a*b

def lcm_fast(a, b):
    pre=int(a/gcd_effiecent(a,b))
    return int(pre*b)

# def lcm_fast(a,b):
#     """ This Function finds the "Least Common Multiple" of two given
#         numbers"""
#     # The Greater Number
#     if a>=b:
#         bigger=a
#         smaller=b
#     else:
#         bigger=b
#         smaller=a
#
#     arr=[]
#     range_old=1
#     range_new=11
#     while True:
#         if (bigger % a == 0 and bigger % b == 0):
#             return bigger
#             break;
#         else: bigger += smaller
#         # for l in range(range_old,range_new):
#         #     arr.insert(l-1,bigger*(l))
#         # # print (arr)
#         # for i in range(1,range_new*2):
#         #     # print (i*b)
#         #     if i*smaller in arr:
#         #         return i*smaller
#         #         break
#         # range_old,range_new=range_new,range_new+10
#         # print (range_new)

# def lcm_prime(a, b):
#     # The Greater Number
#     if a>=b:
#         bigger=a
#         smaller=b
#     else:
#         bigger=b
#         smaller=a
#         prime=[1,2,3]
#         IsPrime=True
#     for i in range(4,bigger):
#         for j in range(2,i):
#             if i%j==0:
#                 IsPrime=False
#                 break
#         if IsPrime==True:
#             prime.append(i)
#         else: IsPrime=True
#     print(prime)

if __name__ == '__main__':
    input = sys.stdin.read()
    a, b = map(int, input.split())
    print(lcm_fast(a,b))

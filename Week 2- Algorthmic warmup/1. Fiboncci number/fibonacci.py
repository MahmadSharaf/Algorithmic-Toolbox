# Uses python3
def calc_fib(n):
    if (n <= 1):
        return n

    return calc_fib(n - 1) + calc_fib(n - 2)
def calc_fib_fast(n):
    ar=[]
    ar.append(0)
    ar.append(1)
    for i in range(2,n+1):
        ar.append(ar[i-1]+ar[i-2])
    # print(ar)
    return ar[n]
n = int(input())
print(calc_fib_fast(n))

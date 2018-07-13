# Uses python3
import sys

def get_optimal_value(capacity, weights, values):
    value = 0.
    normalize=[((a/b),b) for a,b in zip(values,weights)]
    normalize.sort(key=lambda tup: tup[0],reverse=True)
    for i in normalize:
        if (capacity-i[1]) > 0:
            value += i[0] * i[1]
            capacity-=i[1]
        else:
            value += capacity * i[0]
            break
    return value


if __name__ == "__main__":
    data = list(map(int, sys.stdin.read().split()))
    n, capacity = data[0:2]
    values = data[2:(2 * n + 2):2]
    weights = data[3:(2 * n + 2):2]
    opt_value = get_optimal_value(capacity, weights, values)
    print("{:.4f}".format(opt_value))

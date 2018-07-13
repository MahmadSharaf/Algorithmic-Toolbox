# Uses python3
# import numpy as np
import sys

def get_change(m):
    coins= int(m/10)
    tens=m%10
    fives=tens%5
    if tens==0:
        return coins
    elif fives==0:
        return coins+int(tens/5)
    else:
        return coins+int(tens/5)+fives


if __name__ == '__main__':
    # rand_num=np.random.randint(1,1000)
    m = int(sys.stdin.read())
    print(get_change(m))

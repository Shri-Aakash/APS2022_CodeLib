mod=1e9+7
def bin_exp(a, b):
    res = 1
    while b > 0:
        if b & 1 != 0:
            res = res * a % mod
        a = a * a % mod
        b >>= 1
    return res

if __ name__=='__main__':
    base,exp=map(int,input().rstrip().split())
    print(bin_exp(base,exp))

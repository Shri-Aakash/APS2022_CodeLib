def add(t, i, value):
    while i < len(t):
        t[i] += value
        i |= i + 1


# sum[0..i]
def sum(t, i):
    res = 0
    while i >= 0:
        res += t[i]
        i = (i & (i + 1)) - 1
    return res


if __name__ == '__main__':
    n = int(input())
    t = [0] * n
    for i in range(n):
        add(t, i, 1)
    assert n == sum(t, n - 1)

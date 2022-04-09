##Seive of eratosthenese algorithm for generation of primes
def generate_primes(n):
    sieve = [False, False] + [True] * (n - 1)
    i = 2
    while i * i <= n:
        if sieve[i]:
            sieve[2 * i::i] = [False] * (n // i - 1)
        i += 1
    return [i for i in range(len(sieve)) if sieve[i]]


if __name__=='__main__':
    generate_primes(int(input()))

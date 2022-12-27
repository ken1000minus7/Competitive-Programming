t = int(input())
mod = 1000000007
for _ in range(t):
    n = int(input())
    n1 = n
    n2 = n + 1
    n3 = 4 * n - 1
    if(n1 % 2 == 0):
        n1 //= 2
    elif(n2 % 2 == 0):
        n2 //= 2
    else:
        n3 //= 2
    if(n1 % 3 == 0):
        n1 //= 3
    elif(n2 % 3 == 0):
        n2 //= 3
    else:
        n3 //= 3
    n1 %= mod
    n2 %= mod
    n3 %= mod
    ans = n1 * n2 * n3
    ans %= mod
    ans *= 2022
    print(ans % mod)
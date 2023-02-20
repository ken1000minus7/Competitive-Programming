t = int(input())
def check(a):
    for i in range(1, len(a)):
        if a[i] == a[i - 1]:
            return False
    return True
for _ in range(t):
    n, m = map(int, input().split())
    s1 = input()
    s2 = input()
    a1 = [s1[0]]
    a2 = list(s2)
    for i in range(n - 1, 0, -1):
        a2.append(s1[i])
    op = False
    while len(a2) > 0:
        if check(a1) and check(a2):
            op = True
            break
        a1.append(a2[len(a2) - 1])
        a2.pop()
    if op:
        print("YES")
    else:
        print("NO")


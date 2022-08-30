t = int(input())
for _ in range(t):
    n = int(input())
    w1 = input().split()
    w2 = input().split()
    w3 = input().split()
    s1 = set(w1)
    s2 = set(w2)
    s3 = set(w3)
    p1 = 0
    p2 = 0
    p3 = 0
    for s in w1:
        p = 3
        if s in s2:
            p -= 2
        if s in s3:
            p -= 2
        p = max(0,p)
        p1 += p
    for s in w2:
        p = 3
        if s in s1:
            p -= 2
        if s in s3:
            p -= 2
        p = max(0,p)
        p2 += p
    for s in w3:
        p = 3
        if s in s2:
            p -= 2
        if s in s1:
            p -= 2
        p = max(0,p)
        p3 += p
    print(p1,p2,p3)
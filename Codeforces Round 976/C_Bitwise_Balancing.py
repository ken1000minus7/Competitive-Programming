t = int(input())
for _ in range(t):
    b, c, d = map(int, input().split())
    a = 0
    j = 0
    op = True
    while j < 62:
        bi = (b >> j) & 1
        ci = (c >> j) & 1
        di = (d >> j) & 1
        if bi == di:
            j += 1
            continue
        if bi == 0 and di == 1:
            if ci == 1:
                op = False
                break
            a |= (1 << j)
        if bi == 1 and di == 0:
            if ci == 0:
                op = False
                break
            a |= (1 << j)
        j += 1
    if op and a <= (1 << 61) and a >= 0 and ((a | b) - (a & b)) == d:
        print(a)
    else:
        print(-1)
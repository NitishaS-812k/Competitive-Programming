test = int(input())
while test:
    c = 0
    h = 0
    n, p = map(int, input().split())
    a = list(map(int, input().split()))
    for x in a:
        if x >= p//2:
            c += 1
        elif x <= p//10:
            h += 1
    if p==1:
        print("no")
    elif c == 1 and h == 2:
        print("yes")
    else:
        print("no")
    test = test - 1


test = int(input())
while test > 0:
    x, y, k, n = map(int, input().split())
    a = []
    f=0
    for i in range(0, n):
        p, c = map(int, input().split())
        a.append((p,c))
    for p, c in a:
        if (x-y)<= p and c<=k:
            f=1
            break
    if f:
        print("LuckyChef")
    else:
        print("UnluckyChef")
    test = test - 1
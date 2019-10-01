import math
test = int(input())
while test:
    n = int(input())
    a = list(map(int, input().split()))
    k = a[0]
    f = 0
    for i in range(1,n):
        res = math.gcd(k,a[i])
        if res == 1:
            f = 1
    if f == 1:
        print(0)
    else:
        print(-1)
    test = test - 1

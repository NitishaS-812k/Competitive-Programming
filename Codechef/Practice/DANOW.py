n, q = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
while q > 0:
    sum = 0
    l, r = map(int, input().split())
    if l == r:
        print(a[l-1]*b[l-1])
    else:
        for i in range(l,r+1):
            sum += a[i-1]*b[i-1]
        print(sum)
    q = q - 1


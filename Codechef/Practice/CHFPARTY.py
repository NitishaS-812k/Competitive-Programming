test = int(input())
while test > 0:
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    c = 0
    invited = 0
    for i in range(0, n):
        if a[i] > invited:
            break
        else:
            invited += 1
            c = a[i]
    print(invited)
    test -= 1









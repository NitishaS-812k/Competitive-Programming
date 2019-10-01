test = int(input())
while test > 0:
    n = int(input())
    a = list(range(1,n+1))
    if n%2 == 0:
        for i in range(0,n,2):
            if (i+1) == n:
                break
            temp = a[i]
            a[i] = a[i+1]
            a[i+1]= temp
    else:
        for i in range(0,n-2,2):
            if (i+1) == n:
                break
            temp = a[i]
            a[i] = a[i+1]
            a[i+1]= temp
        a[n-3]= n -1
        a[n-2] = n
        a[n-1]= n-2
    print(*a, sep = " ")
    test = test - 1
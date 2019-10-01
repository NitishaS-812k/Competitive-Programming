t = int(input())
while t > 0:
    count = int(0)
    l = int(input())
    a = list((input()))
    for c in a:
        if c == '1':
            count = count + 1
    print(int(((count + 1)*( count ))/2))
    t = t - 1
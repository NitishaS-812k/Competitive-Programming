test = int(input())
while test:
    l, r = map(int, input().split())
    c = 0
    for i in range(l, r+1):
        digit = i%10
        if digit == 2 or digit == 3 or digit == 9:
            c += 1
    print(c)
    test = test - 1


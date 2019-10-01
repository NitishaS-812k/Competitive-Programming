test = int(input())
while test :
    n = int(input())
    a = list(map(int, input().split()))
    print(a.index(min(a))+ 1)
    test = test - 1

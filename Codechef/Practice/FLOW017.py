# cook your dish here
test = int(input())
while test:
    l = list(map(int, input().split()))
    print(sum(l)-max(l)-min(l))
    test = test - 1
# cook your dish here
test = int(input())
while test:
    count = int(0)
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    for x in a:
        if x > 1:
            count += 1
    if count <= k:
        print("YES")
    else:
        print("NO")
    test = test - 1 
            
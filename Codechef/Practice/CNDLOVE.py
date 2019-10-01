# cook your dish here
test = int(input())
while test:
    n = int(input())
    candies = list(map(int, input().split()))
    if sum(candies)%2 == 0:
        print("NO")
    else:
        print("YES")
    test -= 1 
    
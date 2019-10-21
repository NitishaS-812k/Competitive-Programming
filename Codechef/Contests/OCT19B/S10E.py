# cook your dish here
test = int(input())
while test:
    n = int(input())
    p = list(map(int, input().split()))
    count = 1
    p.extend([755,755,755,755,755])
    for i in range(1, n):
        if p[i] < min(p[i-1],p[i-2],p[i-3],p[i-4],p[i-5]):
            count += 1
    print(count)
    test -= 1
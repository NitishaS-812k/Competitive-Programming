# cook your dish here
n = int(input())
l =[]
m = -9
for i in range(0,n):
    l.append(int(input()))
l.sort()
for i in range(0,n):
    a = l[i]*(n-i)
    if a>m:
        m= a
print(m)
test = int(input())
while test>0:
    count= int(0)
    n, m = map(int,input().split())
    alice = list(map(int, input().split()))
    berta = list(map(int, input().split()))
    l1 = set(alice)
    l2 = set(berta)
    k= len(l1.difference(l2))
    print(len(l1)-k)
    test = test -1




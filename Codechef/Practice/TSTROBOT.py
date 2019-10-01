test = int(input())
def count_dis(arr, n):
    arr.sort()
    res = 0
    i = 0
    while i < n:
        while i < n -1 and arr[i] == arr[i+1]:
            i +=1
        res +=1
        i += 1
    return res
while test:
    n, x = map(int, input().split())
    arr = [x]
    s = input()
    for a in s:
        if a == 'R':
            x = x + 1
        else:
            x = x - 1
        arr.append(x)
        k = len(arr)
    print(count_dis(arr, k))
    test = test - 1
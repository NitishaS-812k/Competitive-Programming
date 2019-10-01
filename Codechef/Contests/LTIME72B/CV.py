# cook your dish here
test = int(input())
l1 = ['a','e','i','o','u']
while test:
    n = int(input())
    string = input()
    count = int(0)
    for i in range(0,n):
        if i == n - 1:
            break
        if string[i+1] in l1 and string[i] not in l1:
            count += 1

    print(count)
    test = test - 1

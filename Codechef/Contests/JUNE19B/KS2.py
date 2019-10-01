# cook your dish here
def sum_num(s):
    su = 0
    while s > 0:
        su, s = su + s % 10, s//10
    return su


test = int(input())
x = [9, 8, 7, 6, 5, 4, 3, 2, 1, 0]
while test:
    num = 0
    n = input()
    for i in x:
        k = int(n)*10 + i
        if sum_num(k) % 10 == 0:
            num = k
            break
    print(num)
    test -= 1

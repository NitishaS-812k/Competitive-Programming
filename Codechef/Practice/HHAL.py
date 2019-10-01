# cook your dish here
test = int(input())
while test:
    h = input()
    string = "".join(reversed(h))
    if string == h:
        print(1)
    else:
        print(2)
    test = test - 1
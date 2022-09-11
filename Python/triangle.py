n = int(input("Enter the number of row: "))

for i in range(1, n+1):
    for j in range(0, n-i+1):
        print(' ', end='')
    x = 1
    for j in range(1, i+1):
        print(' ', x, sep='', end='')
        x = x*(i-j)//j
    print()
print()

for i in range(1, n+1):
    for j in range(1, i+1):
        print(i, end='')
    print()
print()

for i in range(1, n+1):
    for j in range(1, i+1):
        print(j, end='')
    print()
print()

c = 0
for i in range(n, 0, -1):
    c += 1
    for j in range(1, i + 1):
        print(c, end=' ')
    print()

for i in range(1, n):
    num = 1
    for j in range(n, 0, -1):
        if j > i:
            print(" ", end=' ')
        else:
            print(num, end=' ')
            num += 1
    print()
print()
print()

count = 2 * n - 2
for i in range(n, -1, -1):
    for j in range(count, 0, -1):
        print(end=" ")
    count += 1
    for j in range(0, i + 1):
        print("*", end=" ")
    print("")
print()

flag = 2 * n - 2
for i in range(0, n):
    for j in range(0, flag):
        print(end=" ")
    flag = flag - 1
    for j in range(0, i + 1):
        print("* ", end="")
    print("")
flag = n - 2
for i in range(n, -1, -1):
    for j in range(flag, 0, -1):
        print(end=" ")
    flag = flag + 1
    for j in range(0, i + 1):
        print("* ", end="")
    print("")

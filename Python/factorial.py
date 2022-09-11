def fact(num):
    if num == 0:
        return 1
    else:
        return num*fact(num-1)


a = int(input("Enter a number to find its factorial: "))
ans = fact(a)
print("Factorial of ", a, " is ", ans)

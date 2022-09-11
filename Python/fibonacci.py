def fibo(n):
    a = 0
    b = 1
    if n <= 0:
        print("Please enter a valid input ")
    elif n == 1:
        print(a)
    else:
        print(a, ",", b, end="")
        for i in range(0, n-2):
            c = a+b
            a = b
            b = c
            print(",", c, end="")


num = int(input("\nEnter the number of lines for Fibonacci series: "))
fibo(num)

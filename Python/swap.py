def swap(x, y):
    x = x+y
    y = x-y
    x = x-y
    return x, y


a, b = input("\nEnter two numbers to swap: ").split()
print("Before swapping\na=", a, "\nb=", b, "\n")
a, b = swap(int(a), int(b))
print("After swapping\na=", a, "\nb=", b, "\n")

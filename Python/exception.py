import sys
try:
    x=int(input())
    
    y=int(input())
except:
    print("Enter a valid ammount")
    sys.exit(1)

try:
    result=x/y
except:
    print("Error cant divide by zero")
    sys.exit(1)
    
print(f"{x}/{y}={result}")
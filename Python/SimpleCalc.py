x=int(input("Enter first num: "))
y=int(input("Enter second num: "))
op=input("Enter the operator: ")
if(op=='+'):
    print(x+y)
elif(op=='-'):
    print(x-y)
elif(op=='*'):
    print(x*y)
elif(op=='/'):
    print(x/y)
else:
    print("INVALID INPUT")
    
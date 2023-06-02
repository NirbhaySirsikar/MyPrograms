x=int(input())
flag=True
for i in range(2,x):
    if(x%i==0):
        flag=False
        break
if(x==0 or x==1):
    print('It is a composite number')
elif(flag):
    print('It is a prime')
else:
    print('It is not a prime')
li=[]
n=2
x=int(input('Enter the number: '))
while(len(li)<x):
    flag=True
    for i in range(2,int(n/2)):
        if n%i==0:
            flag=False
            continue
    if flag:
        li.append(n)
    n+=1
print(li)

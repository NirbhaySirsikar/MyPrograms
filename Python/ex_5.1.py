sum=0
i=0
while True:
    n=input("Enter the number:")
    if n == 'done':
        break
    try:
        n=int(n)
    except:
        print("Enter a valid input")
        continue
    sum=sum+n
    i=i+1
print(sum,i,sum/i)

l=None
s=None
while True:
    n = input('Enter a number:')
    if n == 'done':
        break
    try:
        n=float(n)
    except:
        print('Invalid input')
        continue
    if l==None and s==None:
        l=s=n
    elif n<s:
        s=n
    elif n>l:
        l=n
print('Maximum is', l)
print('Minimum is', s)
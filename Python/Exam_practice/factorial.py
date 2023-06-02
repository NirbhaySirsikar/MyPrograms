x=int(input())
if x<0: print('please use any positive number')
elif x==0: print('1')
else:
    factorial=1;
    for i in range(1,x+1):
        factorial=factorial*i
    print(f'the factorial is {factorial}')


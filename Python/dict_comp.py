li=['a','b','c','d','e']
li2=[1,2,3,4,5]
# {expression traversing(loop) if condition}
di={i:j for i,j in zip(li,li2)}
print(di)
print({i:j+1 for i,j in di.items() if(i>'c')})

temp=[45,89,63,74,11]
print(temp)
print({(9/5)*i+32 for i in temp})
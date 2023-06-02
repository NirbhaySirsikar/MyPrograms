# list=[]
# for i in range (1,26):
#     list.append(i)
# #list comprehension
# list=[[i/2,i*2] for i in list if(i>5)]
# print(list)

ls = []
for i in range(1, 26):
    ls.append(i)
# list comprehension
ls = [[i+1] for i in ls if (i>15) ]
print(ls)

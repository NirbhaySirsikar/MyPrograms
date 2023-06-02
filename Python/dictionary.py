d={"name":"Nirbhay","enr":33,"loc":"Baroda","year":3}
print(d["name"],d["enr"],d["loc"],d["year"])
d["age"]=20
print(d)
li=['a','b','c']
print(d.fromkeys(li, 5))
for i,j in d.items(): 
    print(i) 
    print(j)
# for i in d: print(d)
# print(d.fromkeys("name", "Nirbhay"))
# Nested List
nestedList=[1,2,3,['a','b']];
ListinsideList=nestedList[3];
ListinsideListElement=nestedList[3][0];
print(ListinsideList);
print(ListinsideListElement);

# Length Concatenation
LengthList=["Hello","parul","university","I","am","pANTH"]
k=3
for ele in LengthList:
    if(len(ele)>k):
        print(ele)

#membership
List1=[1,2,3,4]
List2=[4,6,7,8]
for i in List1:

    if i in List2 :
        print("equal")
    else:
        print("notequal")

#slicing
slice=List1[1:2]
print(slice)
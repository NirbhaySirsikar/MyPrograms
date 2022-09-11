people=[
    {"name":"Harry","house":"Gryffindor"},
    {"name":"Cho","house":"Ravenclaw"},
    {"name":"Draco","house":"Slytherin"}
]
#Normal way using function
def f(person):
    return person ["name"]

people.sort(key=f)
print(people)


#Using lambda 
# syntax =_func_name_= lambda _argument_ : _return_value_
people.sort(key=lambda person: person["name"])
print(people)
#Another example
sq= lambda num:num*num
print(f"The square of the number is {sq(4)}")
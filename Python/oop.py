#name =  input("Enter your name : ")
#rollno =  input("Enter your rollno : ")
class prog:
    def __init__(self, name, rollno):
        self.name = name
        self.rollno = rollno

    def input(self):
        name = input(self.name)
        rollno = input(self.rollno)

    def output(self, name, rollno):
        print(self.name, self, rollno)


obj = prog()
obj.input
obj.output

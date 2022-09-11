class a(object):
    def __innit__(self,num):
        self.num=num
        
    def out(self):
        print("This is in cass a ", self)


class b(a):
    def out(self):
        print("This is in cass b", self,"And the num is ",num)


obj=b()

b.out(1)

class Flight():
    def __init__(self,capacity):
        self.capacity=capacity
        self.passengers=[]
    def add_passengers(self,name):
        
        if not self.open_seats():
            return False
        self.passengers.append(name)
        return True
    def open_seats(self):
        return self.capacity-len(self.passengers)

            
seats=int(input("Enter the number of seats you want to have:"))
flight= Flight(seats)

while(True):
    person=input("Enter the name of the passenger: ")
    if(person == "END"):
        print("Thanks for using our software <3")
        break
    elif (flight.add_passengers(person)):
        print(f"Successfull added {person} to the flight")
    else:
        print(f"Seats are full for {person}")

    
    

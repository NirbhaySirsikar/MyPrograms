attendance = float(input("Enter student's attendance :"))
no_of_atkt = int(input("Enter the number of atkt :"))

if not attendance <= 75.0 and no_of_atkt < 3:
    print("You are elegible for exam")
else:
    print("You are not elegible")

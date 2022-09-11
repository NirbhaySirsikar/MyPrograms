score = input("Enter your score here:")
error=0;
try:
    score=float(score)
except:
    error=1
if error ==1:
    print ("ERROR")
else :
    if score>=0.9:
        print("A")
    elif score >= 0.8:
        print("B")
    elif score >= 0.7:
        print("C")
    elif score >= 0.6:
        print("D")
    elif score < 0.6:
        print("F")
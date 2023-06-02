import datetime

# BOT CONFIG

# Answers module

class ans:
    # import geocoder

    name = "Jarvis"
    age = "3 Days"

    # def getloc():
    #     return [geocoder.ip('me').state,geocoder.ip('me').city]

    def currTime():
        return datetime.now().strftime("%H:%M")

    def whattoans(s):
        if("age" in s):
            return f"my age is {age}"
        elif("hi" in s or "hellow" in s):
            return f"Hay 👋"
        elif("name" in s):
            return f"my name is {name}"
        elif("how are you" in s):
            return f"I am fine"
        elif("help" in s):
            return "how can i help"
        elif("hobbies" in s):
            return "eat sleep repeat"
        elif("job" in s):
            return "I work at google as sde 3🎮"
        elif(("time" in s) or ("date" in s)):
            return datetime.datetime.now()
        # elif("location" in s or "where are you from" in s):
        #     return f"I'am in {getloc()[0]} near {getloc()[1]}"
        elif("what is time there" in s):
            return f"time is {currTime()}"
        else:   
            return "sry I cant ans😥"
    
s = ""
while(s!="bye"):
    s = input("[user]: ")
    print(f"[bot]: {ans.whattoans(s)}")
    
print("[bot]: ok bye🙋")
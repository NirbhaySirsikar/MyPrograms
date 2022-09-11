def announce(f):
    def wrapper():
        print("Before")
        f()
        print("After")
@announce
def h():
    print("Hello, world")

h()
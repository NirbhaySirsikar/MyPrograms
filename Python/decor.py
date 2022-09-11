
def add(x, y):
    return x+y


def sub(x, y):
    return x-y


def multi(x, y):
    return x*y


def div(x, y):
    return x/y


def calc(func):
    calculation = func(4, 5)
    print(calculation)


calc(add)
calc(sub)
calc(multi)
calc(div)

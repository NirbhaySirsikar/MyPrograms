a = [1, 2, 3, 4]
try:
    print("Second element = %d" % (a[9]))
    # Throws error since there are only 3 elements in array
    print("Fourth element = %d" % (a[6]))
except:
    print("An error occurred")

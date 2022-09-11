def computepay(h,r):
    o= h*r
    if h>40:
        x=(h-40)*(r*0.5)
    return (o+x)
hrs=float(input("Enter hours:"))
rte=float(input("Enter rate:"))
soln= computepay(hrs,rte)
print("Pay",soln)
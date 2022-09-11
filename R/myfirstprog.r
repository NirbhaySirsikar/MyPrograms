numeric(10)

c(1,2,3,4,5)

c(1,2,c(3,4,5))

1:5

seq(1,10,2)

seq(3,length.out=10)

1+1:5

TRUE

"HELLO,WORLD!"
'HELLO,WORLD!'

c("Hello","World")

c("Hello","World")==c('Hello','World')

c('Hello','World')=="Hello, World"

cat("Is\"You\"a chinese name?")

v1<- c(1,2,3,4)
v1[2]
v1[2:4]
v1[-3]
a<-c(1,3)
v1[a]
v1[c(1,2,-3)]
v1[3:6]
v1[c(TRUE,FALSE,TRUE,FALSE)]
v1[2]<-0
v1
v1(v1<-2)<-0
v1
x<-c(a=1,b=2,c=3)
x
x["a"]
x[c("a","c")]
x[c("a","a","c")]
names(x)
names(x)<-c("x","y","z")
x["z"]
names(x)<-NULL
x
x<-x(a=1,b=2,c=3)
x["d"]
names(x["d"])
x[[-1]]
x[["d"]]

class(c(1,2,3))
class(c(TRUE,TRUE,FALSE))
class(c("Hello","World"))

is.numeric(c(1,2,3))
is.numeric(c(TRUE,TRUE,FALSE))
is.numeric(c("Hello","World"))

strings<-c("1","2","3")
class(strings)

as.logical(c(-1,0,1,2))
as.character(c(1,2,3))
as.character(c(TRUE,FALSE))

as.character(c(1,2)+c(2,3))
c(1,2,3,4)+2
c(1,2,3)-c(2,3,4)
c(1,2,3)*c(2,3,4)
c(1,2,3)/c(2,3,4)
c(1,2,3)^2
c(1,2,3)^c(2,3,4)

c(1,2,3,14)%%2
c(a=1,b=2,c=3)+c(c=2,c=3,d=4)
c(a=1,b=2,3)+c(c=2,c=3,d=4)

matrix(c(1,2,3,
         4,5,6,
         7,8,9),nrow=3,byrow=FALSE)

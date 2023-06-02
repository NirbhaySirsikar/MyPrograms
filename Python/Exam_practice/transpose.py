X = [[12,7,3],
 [4 ,5,6],
 [7 ,8,9]]
Y = [[5,8,1],
 [6,7,3],
 [4,5,9]]
result = [[0,0,0],
 [0,0,0],
 [0,0,0]]
for x in range( len(X)):
    for y in range(len(X[0])):
        result[x][y]=X[x][y]+Y[x][y]
print(result)

for x in range( len(X)):
    for y in range(len(X[0])):
        result[y][x]=X[x][y]
for i in range(len(X)):
    print (result[i])

m = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
transpose=[[0, 0, 0], [0, 0, 0], [0, 0, 0]]

for i in range(3):
    for j in range(3):
        transpose[j][i]=m[i][j]
print(transpose)
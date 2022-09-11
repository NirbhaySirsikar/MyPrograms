from matplotlib import pyplot as plt


import matplotlib.pyplot as plt
roll=[1,2,3,4,5,6,7,8,9,10]
age=[12,14,17,16,18,19,15,10,8,10]
plt.bar(roll,age,width=0.5,color=['springgreen','orange'])
plt.xlabel('roll number')
plt.ylabel('age of students')
plt.title('age graph')
plt.show()


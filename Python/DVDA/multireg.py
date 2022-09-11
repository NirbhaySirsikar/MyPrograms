import numpy as np
import matplotlib as mpl
from mpl_toolkits.mplot3d import Axes3D
import matplotlib.pyplot as plt

import plotly
import plotly.graph_objects as go
import pandas as pd

def generate_dataset(n):
	x = []
	y = []
	random_x1 = np.random.rand()
	random_x2 = np.random.rand()
	for i in range(n):
		x1 = i
		x2 = i/2 + np.random.rand()*n
		x.append([1, x1, x2])
		y.append(random_x1 * x1 + random_x2 * x2 + 1)
	return np.array(x), np.array(y)

x, y = generate_dataset(200)

# excel_file='Python\DVDA\charts.xlsx'
# df=pd.read_excel(excel_file)
# print(df)

# data=[go.Scatter(x=df['date'],y=df['profit'])]
# x=df['date']
# y=df['profit']

mpl.rcParams['legend.fontsize'] = 12

fig = plt.figure()
ax = fig.gca(projection ='3d')

ax.scatter(x[:, 1], x[:, 2], y, label ='y', s = 5)
ax.legend()
ax.view_init(45, 0)

plt.show()

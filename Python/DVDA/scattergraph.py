import plotly
import plotly.graph_objects as go
import pandas as pd
excel_file='Python\DVDA\charts.xlsx'
df=pd.read_excel(excel_file)
print(df)
data=[go.Scatter(x=df['date'],y=df['profit'])]
fig=go.Figure(data)
fig.show()


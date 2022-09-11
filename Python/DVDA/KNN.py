# This Python 3 environment comes with many helpful analytics libraries installed
# It is defined by the kaggle/python docker image: https://github.com/kaggle/docker-python
# For example, here's several helpful packages to load in 

import numpy as np # linear algebra
import pandas as pd # data processing, CSV file I/O (e.g. pd.read_csv)

# Input data files are available in the "../input/" directory.
# For example, running this (by clicking run or pressing Shift+Enter) will list the files in the input directory

# from subprocess import check_output
# print(check_output(["ls", "../input"]).decode("utf8"))

# Any results you write to the current directory are saved as output.
data_path = "diabetes.csv"
ds = pd.read_csv('diabetes.csv')

y = ds['diagnosis']
X = ds.drop('diagnosis', axis=1)

X = X.drop('id', axis=1)
i = len(X.columns)
X = X.drop(X.columns[i-1], axis=1)

y.replace(('M', 'B'), (1, 0), inplace=True)

from sklearn.cross_validation import train_test_split
X_train, X_test, y_train, y_test = train_test_split(X,y,test_size=0.33, random_state=6)

from sklearn.neighbors import KNeighborsClassifier
clf = KNeighborsClassifier(n_neighbors=3) 
clf.fit(X_train, y_train)  
print(clf.score(X_test, y_test))
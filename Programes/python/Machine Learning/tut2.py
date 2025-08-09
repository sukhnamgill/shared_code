import pandas as pd 
from sklearn.preprocessing import PolynomialFeatures
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split
import matplotlib.pyplot as plt
dataset=pd.read_csv(r"sample.csv")
# print(dataset.head(3))
x=dataset[['Temp']]
# print(x)
y=dataset['sale']
plt.scatter(x,y)
plt.show()
ob=PolynomialFeatures(degree=2)
ob.fit(x)
x=ob.transform(x)
# print(x)
y=dataset['sale']
x_train,x_test,y_train,y_test=train_test_split(x,y,test_size=0.25)
model=LinearRegression()
model.fit(x_train,y_train)
print(model.score(x_test,y_test)*100)

# test=ob.transform([[3.5785537]])
# print(test)
# print(model.predict(test))



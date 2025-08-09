import numpy as np
from sklearn import linear_model,datasets
from sklearn.metrics import mean_squared_error 
print("Welcome in ML")
x_tr=np.array([[1],[2],[3]])
y_tr=np.array([[3],[2],[4]])
model=linear_model.LinearRegression()
model.fit(x_tr,y_tr)
print(model.intercept_,model.coef_)
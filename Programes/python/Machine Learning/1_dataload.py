import numpy as np
import matplotlib.pyplot as plt
from sklearn import datasets,linear_model
from sklearn.metrics import mean_squared_error
datas=datasets.load_diabetes()
# dict_keys(['data', 'target', 'frame', 'DESCR', 'feature_names', 'data_filename', 'target_filename', 'data_module'])
data_val=datas.data
#[:,np.newaxis,2]
xtrain=data_val[:-30]
xtest=data_val[-20:]

data_y=datas.target
ytrain=data_y[:-30]
ytest=data_y[-20:]
model=linear_model.LinearRegression()
mod=model.fit(xtrain,ytrain)
j=mod.predict(xtest)
print("the error is",mean_squared_error(j,ytest))
# print(ytest)
print("done")
# plt.scatter(xtest,ytest)
# plt.show()
print(model.coef_,model.intercept_)
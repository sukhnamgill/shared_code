import numpy as np
data=np.array([[1,2,3,4],[5,6,7,8],[9,10,11,12]])

print(data)
print(type(data))
print(data.shape)
print(data.dtype)

zero=np.zeros( (10,4))
one=np.ones((20,5))
emp=np.empty((5,5),dtype="int16")
print(emp.dtype)

# print(empty,one)
# can do math 
print(data*5)
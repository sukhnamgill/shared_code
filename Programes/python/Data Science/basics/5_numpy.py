import numpy as np
arr=np.array([10,20,30,40,23,24,25,0,1,2,3,4])
print(arr)
print(arr.shape)
arr=arr.reshape(6,2)
print(arr.shape)
arr_new=np.array([10,20,30,40,23,24,25,0,1,2,3,4])
print(arr_new.argsort())
# return in index for sorting the value
a=np.argmax(arr_new)
b=np.argmin(arr_new)
print(a,"\n",b)
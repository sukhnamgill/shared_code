import numpy as np

arr_str= np.array([["apple","orange","mango","Juice "],["mausami ka juice","coffe","kela","anda"]])
arr_int=np.array([1,2,3,4,5,6,7,8,9,10])
arr_float=np.array([1.2,2.1,3.1,3.2,4.5,2.003])
arr_bool=np.array([True,False,True,True,False]) 
li=[arr_str,arr_bool,arr_float,arr_int]
for i in li:
    print(i)
    print("its type is-->",type(i) )
    
    print("shape is--> ",i.shape,"its d type is -->",i.dtype)
# print(arr_bool)
# print(arr_float)
# print(arr_int)
# print(arr_str)
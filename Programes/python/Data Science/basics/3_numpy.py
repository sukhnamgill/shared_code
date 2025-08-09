import numpy as np
ar1=np.array([[1,2,3,4,5,6,7],[8,9,10,11,12,13,14]])
new=ar1[3:6].copy()
# new=ar1[3:6]
# new[2]=98
# print(ar1)
# print
j=ar1.sum(0)
print(j)
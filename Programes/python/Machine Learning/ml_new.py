from sklearn.preprocessing import LabelEncoder
import pandas as pd 
d1=pd.DataFrame({"name":["apple","orange","Guava","__gh"]})
ob1=LabelEncoder()
d1["encoded"]=ob1.fit_transform(d1)
# print(s)
print(d1)
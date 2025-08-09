import pandas as pd
data_1=pd.DataFrame([["sukhnam",19,"badhni"],["varinder",12,"rasulpur"],["arshpreet",19,"chakar"]],columns=["name","age","village"])
data_2=pd.DataFrame([["Jovan",17,"Dauder"],["Gurkirat",19,"Dehrka"],["Nitin",19,"Ludhiana"]],columns=["naam","umar","pind"])
# print(data_1)
# print(data_2)
data_merge=pd.merge(data_1,data_2,left_on="age",right_on="umar")
print(data_merge)
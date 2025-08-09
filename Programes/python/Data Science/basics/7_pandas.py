import pandas as pd
data=pd.DataFrame([["sukhnam",19,"boy"],["gurkirat",19,"girl"],["Arshpreet" ,19,"boy"]],columns=["Name","Age","Gender"])
print(data.shape) 
print(data['Name'])
# print(data.iloc[0:2,1:2]) for specific range of value to display

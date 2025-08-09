import pandas as pd
data=pd.DataFrame([["sukhnam",19,"Boy"],["Ayush",18,"male"],["Daksh",19,"kid"],["Nitin",19,"Boy"]],columns=["Name","Age","status"])
print(data)
data.to_csv('new_friend.csv',index=False)
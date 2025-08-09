from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split

x=[[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
y=[10,20,30,40,78,90]
x_train,x_text,y_train,y_test=train_test_split(x,y,test_size=0.25,random_state=5)
ob1=LinearRegression()

ob1.fit(x_train,y_train)
result=ob1.predict([[7,5]])
print(result)
print(ob1.score(x_text,y_test)*100)
print(x_train,y_train)

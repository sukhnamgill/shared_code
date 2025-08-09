from pymongo import MongoClient
print("hello world")
STRING="mongodb+srv://sukhnam23:Iamartist19$@sukhnam23.fthsm.mongodb.net/?retryWrites=true&w=majority&appName=SUKHNAM23"
client=MongoClient(STRING)
db=client["STUDENT"]
student=db[" Svhoolstudents"]
# name=input("enter name")
# age=input ("enter age")
# sex=input("enter your sex")
# data={'name':name, 'age':age,'sex':sex}
# student.insert_one(data)
# print("data inserted sucessfully")
ret_data=student.find_one({"name":" Sukhnam singh gill"})
print(ret_data)

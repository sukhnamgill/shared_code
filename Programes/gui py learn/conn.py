from pymongo import MongoClient
#functions

def register(username,password):
    check={"name":username}
    data={"name":username, 'password':password,"count":0}
    n=collections.find_one(check)
    if n==None:
        collections.insert_one(data)
        print("registered sucessfully")
        # return 1
        return 1
    else:
        print("change username")
    
        
def login(username,password):    
    query={"name":username,'password':password}
    n=collections.find_one(query)
    # print(n)
    if(n!=None):
        # print("login sucessfully")
        # status=True
        # webname=input("enter website name")
        # webuser=input("enter username name")
        # webpass=input("enter password")
        # pass_record(webname,webuser,webpass,username)
        # client.close()
        return 1
    else:
        
        # print(n)
        # print("Incorrect username and password")
        # client.close()
        return 0
def see_data(username):
    data=(collections.find_one({"name":username}))
    count=data["count"]
    print("total username and passwords",count)
    i=0
    n=[]
    while(count>i):
        
        cat_str=f"key{i}"
        # print(i,"->",data[cat_str])
        li=data[cat_str]
        n.append(li)
        i=i+1

    return n
def pass_record(websitename,websiteusername,web_pass,username):
    data_fetch=collections.find_one({"name":username})
    count=data_fetch['count']
    print(count)
    data={"websitename":websitename,"username":websiteusername,"pass":web_pass}
    name=collections.find_one({"name":username})
    sp_id=(name['_id'])
    print(sp_id)

    cat_str=f"key{count}"
    collections.update_one({"_id":sp_id},{"$set":{cat_str:data}})
    count=count+1
    collections.update_one({"_id":sp_id},{"$set":{"count":count}})
    print("data inserted sucessfully")

url="mongodb+srv://sukhnam23:12345678$$@cluster0.401eh.mongodb.net/?retryWrites=true&w=majority&appName=Cluster0"
client=MongoClient(url)
db=client["loginpass"]
collections=db["personal"]
#main function
# register("sukhnam","23")
# login("sukhnam","23")
# register("mayank","rawatbsdk")
# login("mayank","rawatbsdk")
# see_data("sukhnam")




# client.close()             
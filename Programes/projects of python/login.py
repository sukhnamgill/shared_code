# print("hello world")
from pymongo import MongoClient

# Replace with your MongoDB connection string
MONGO_URI = "mongodb+srv://sukhnam23:12345678$$@cluster0.401eh.mongodb.net/?retryWrites=true&w=majority&appName=Cluster0"  # Change if using remote DB

# Establish a connection
client = MongoClient(MONGO_URI)

# Select a database
db = client["mydatabase"]  # Replace 'mydatabase' with your DB name

# Select a collection
collection = db["mycollection"]  # Replace 'mycollection' with your collection name

# Insert a sample document
data = {"name": "John Doe", "age": 25, "city": "New York"}
insert_result = collection.insert_one(data)

# Print the inserted ID
print("Inserted document ID:", insert_result.inserted_id)

# Fetch and print all documents
# for doc in collection.find():
#     print(doc)

# Close the connection (optional)
client.close()

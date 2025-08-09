import json
import pandas as pd
print("hello here is json file")
data='{"name":"sukhnam","age":19}'
print(type(data))
loaded_data=json.loads(data)
print(loaded_data["age"])
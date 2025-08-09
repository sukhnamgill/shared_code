import matplotlib.pyplot as pt
data=[40,25,10,20]
lab=["India","Australia","Canada","England"]
ex=[0.0,0.1,0.0,0.0]
pt.pie(data,labels=lab,explode=ex,autopct='%0.2f%%',shadow=True)
pt.show()
import matplotlib.pyplot as pl
name=["apple","orange"]
price=[200,150]
pl.subplot(2,2,1)
pl.pie(price,labels=name)
#line graph
pl.subplot(2,2,2)
pl.plot(name,price)
# pl.show()
pl.subplot(2,2,3)
pl.bar(name,price)
pl.show()
# pl.subplot(2,2,4)
# pl.plot(name,price)
# pl.show()
class Animals:
    # default variable
    legs=4
    eyes=2
    def __init__ (self,name,age,weight):
        self.name=name
        self.age=age
        self.weight=weight
        self.show_des()

        
    def show_des(self):
        print(f"Name is {self.name} and age is {self.age} and weight is {self.weight}")


# out of class
dog=Animals("germanship",20,60)

lion=Animals("Lion",30,100)

# a=[dog.name,dog.age,dog.weight]
# lion.show_des()


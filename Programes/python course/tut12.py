class Parent:
    hair_color="brown"
    eyes_color="black"
    height="medium"

    def intro (self):
        print("iam from aprent class")

class Child(Parent):
    weight=45

class Grandchild(Child):
    color="Pink"
obj_parent =Parent()
a=obj_parent.hair_color
print(a)
obj_child =Child()
b=obj_child.weight
print(b)
print(obj_child.hair_color,obj_child.eyes_color)

grand_child=Grandchild()
print(grand_child.eyes_color)
grand_child.intro()

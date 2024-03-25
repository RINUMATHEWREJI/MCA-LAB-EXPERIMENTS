from abc import ABC,abstractmethod
class Polygon(ABC):
    @abstractmethod
    def dimensions(self):
        pass
    
    @abstractmethod
    def area(self):
        pass  

class Rectangle(Polygon):
    def __init__(self,l,w):
        self.l = l
        self.w = w
    def dimensions(self):
        print(f"height : {self.l} \n width : {self.w}")
    def area(self):
        return self.l * self.w
class Triangle(Polygon):
    def __init__(self,a,b):
        self.a = a
        self.b = b
    def dimensions(self):
        print(f"height : {self.a} \n base : {self.b}")
    def area(self):
        return 0.5 * self.a * self.b

l = int(input("enter the length of ractangle : "))
w = int(input("enter the width of ractangle : "))
a = int(input("enter the height of triangle : "))
b = int(input("enter the base of triangle : "))
rect = Rectangle(l,w)
tri = Triangle(a,b)
print(f"rectangle")
rect.dimensions()
print(f"rectangle area : {rect.area()}")
print("triangle :")
tri.dimensions()
print(f"triangle area: {tri.area()}")
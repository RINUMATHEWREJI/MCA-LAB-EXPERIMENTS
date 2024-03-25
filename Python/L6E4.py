class Rectangle:
    def __init__(self,length,breadth):
        self.length = length
        self.breadth = breadth
    def area(self):
        return self.length * self.breadth
    def perimeter(self):
        return 2 * (self.length + self.breadth)
length = int(input("enter the length of rectangle : "))
breadth = int(input("enter the breadth of rectangle : "))
length2 = int(input("enter the length of 2nd rectangle : "))
breadth2 = int(input("enter the breadth of 2nd rectangle : "))
rect1 = Rectangle(length,breadth)
print(f"1st rectangle area is {rect1.area()}")
print(f"1st rectangle perimeter is {rect1.perimeter()}") 
rect2 = Rectangle(length2,breadth2)
area1 = rect1.area()
area2 = rect2.area()
if area1 > area2:
    print(f"ist rectangle area {area1} is greater")
elif area2 > area1:
    print(f"2nd rectangle area {area2} is greater")
else:
    print(f"ist rectangle area {area1} and 2nd reactangle area {area2} are equal")
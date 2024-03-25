square = lambda a : a * a
rectangle = lambda a,b : a * b
triangle = lambda k,m : 0.5 * (k * m)
a = int(input("enter the sides of the square : "))
l = int(input("enter the length of the rectangle : "))
b= int(input("enter the breadth of the rectangle : "))
base = int(input("enter the base of the triangle : "))
h = int(input("enter the height of the triangle : "))
print(f"the area of square is {square(a)}")
print(f"the area of rectangle is {rectangle(l,b)}")
print(f"the area of triangle is {triangle(base,h)}")
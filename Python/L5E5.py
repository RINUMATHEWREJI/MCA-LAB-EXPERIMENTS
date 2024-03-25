import graphics
from graphics import circle,rectangle
from graphics.tdgraphics import cuboid,sphere
radius1 = int(input("enter the radius of circle : "))
print(f"area of circle is : {circle.circlearea(radius1)}")
print(f"perimeter of circle is : {circle.circleperimeter(radius1)}")
length1 = int(input("enter the length of rectangle : "))
width1 = int(input("enter the width of rectangle : "))
print(f"area of rectangle is : {rectangle.rectanglearea(length1,width1)}")
print(f"perimeter of rectangle is : {rectangle.rectangleperimeter(length1,width1)}")
l2 = int(input("enter the length of cuboid : "))
b2 = int(input("enter the width of cuboid : "))
h2 = int(input("enter the height of cuboid : "))
print(f"area of cuboid is : {cuboid.cuboidarea(l2,b2,h2)}")
print(f"perimeter of cuboid is : {cuboid.cuboidperimeter(l2,b2,h2)}")
r2 = int(input("enter the radius : "))
print(f"area of sphere is : {sphere.spherearea(r2)}")
print(f"perimeter of sphere is : {sphere.sphereperimeter(r2)}")
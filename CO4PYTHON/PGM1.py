class Rectangle():
    def __init__(self,length,breadth):
        self.length=length
        self.breadth=breadth
    def area(self):
        return(self.length * self.breadth)
    def perimeter(self):
        return(2*(self.length + self.breadth))
r1=Rectangle(4,5)
r2=Rectangle(5,7)
a1=r1.area()
a2=r2.area()
p1=r1.perimeter()
p2=r2.perimeter()
print("the area of rectangle 1:",a1)
print("the perimeter of rectangle 1:",p1)
print("the area of rectangle 2:",a2)
print("the perimeter of the rectangle:",p2)
if(a1>a2):
    print("rectangle is bigger")
else:
    print("rectangle 2 is bigger")


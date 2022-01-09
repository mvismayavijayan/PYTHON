a=int(input("enter the sides of square:"))
s_area=lambda a:a*a
print("area of square is: ",s_area(a))
l=int(input("enter the length of rectangle:"))
b=int(input("enter the breadth of rectangle:"))
r_area=lambda l,b:l*b
print("area of rectangle is:",r_area(l,b))
b=int(input("enter the base of the triangle:"))
h=int(input("enter the height of the triangle:"))
t_area=lambda b,h:.5*b*h
print("area of triangle is :",t_area(b,h))
class Rectangle:
    def __init__(self,length,width):
        self.__length=length
        self.__width=width
    def area(self):
        return self.__length*self.__width
    def __Lt__(self,other):
        return self.area()>other.area()
    L1=int(input("enter the length of first rectangle:"))
    W1=int(input("enter the width of the first rectangle:"))
    rectangle1=(L1,W1)
    L2=int(input("enter the length of the second rectangle:"))
    W2=int(input("enter the width of the second rectangle:"))
    rectangle2=(L2,W2)
    if rectangle1<rectangle2:
        print("area of rectangle1 is smaller")
    else:
        print("area of rectangle2 is smaller")

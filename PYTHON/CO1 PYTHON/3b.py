n=int(input("Enter the number of numbers:"))
list=[]
for i in range(n):
    a=int(input("Enter the number:"))
    list.append(a)
    print(list)
    list1=[x**2for x in list]
    print(list1)
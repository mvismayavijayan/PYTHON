a=int(input("enter first number"))
b=int(input("enter second number"))
c=int(input("enter third number"))
if a>b:
    if a>c:
        print(a,"is big")
    else:
        print(c," is big")
elif b>c:
        print(b,"is big")
else:
        print(c," is big")
f=open("myfile2.txt", "r")
c=f.readlines()
li=[x.strip() for x in c]
print(li)
f1=open("myfile.txt", "r")
f2=open("new.txt", "w")
c=f1.readlines()
for i in range(0,len(c)):
    if(i%2!=0):
        f2.write(c[i])
f2.close()
f2=open("new.txt", "r")
c1=f2.read()
print(c1)
f1.close()
f2.close()

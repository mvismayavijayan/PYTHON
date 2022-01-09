string=input("enter the string:")
count=0
for i in range(len(string)):
    if(string[i]!=' '):
        count=count+1
print("the total number of characters in the string is ",count)
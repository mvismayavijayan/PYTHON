list=[2,4,5,15,18,19]
l2=[]
print(list)
for i in list:
    if i%2!=0:
        l2.append(i)
print("after removing even numbers:",l2)
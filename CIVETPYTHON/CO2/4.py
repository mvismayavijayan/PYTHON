import math
start=int(input("enter a starting limit 4 digit number:"))
end=int(input("enter a ending limit 4 digit number:"))
perfect=[]
for i in range(start,end+1):
    flag=0
    num=i
    while num>0:
        digit=num%10
        if digit not in [0,2,4,6,8]:
            flag=1
            break
        num=int(num/10)
    if flag==0 and int(math.sqrt(i)+0.5)**2==i:
        perfect.append(i)
print("the list of perfect perfect square number are:",perfect)
list=[]
num=int(input("enter number of element in list:"))
for i in range(1,num+1):
    a=int(input("enter elements:"))
    list.append(a)
print("largest number:",max(list))

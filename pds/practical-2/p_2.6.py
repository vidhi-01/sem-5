n = int(input("Enter array size: "))
list = []
for i in range(0,n):
    x = int(input("Enter element:"))
    list.append(x)
print("Original list:")
print(list)
for i in list:
	if(i%2 == 0):
	    list.remove(i)
print("list after removing EVEN numbers:")
print(list)

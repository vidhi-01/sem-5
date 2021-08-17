n = int(input("Enter array size: "))
array = []
for i in range(0,n):
    x = int(input("Enter element:"))
    array.append(x)
prevElement = 0
currElement = 0
sum = 0
if len(array)==0:
    sum = 0
else:
    for i in range(len(array)):
        currElement = array[i]
        if currElement==13:
            prevElement = currElement
            continue
        elif prevElement==13:
            prevElement = currElement
            continue
        else:
            sum = sum + array[i]
            prevElement = currElement
print("Sum of numbers in array : ",sum)

n = int(input("Enter array size : "))
arr = []
for i in range(0,n):
    x = int(input("Enter element :"))
    arr.append(x)
for i in range(0,len(arr)):
    if i==0:
        temp = arr[i]
    else:
        arr[i-1] = arr[i]
arr[len(arr)-1] = temp
print("list after shifted left by one position:")
print(arr)

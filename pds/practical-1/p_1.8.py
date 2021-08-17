r=int(input("Enter range : "))
a=0
b=1
print("Fibonacci series : ")
print(a,end=" ")
print(b,end=" ")
for i in range(2,r):
    c=a+b
    print(c,end=" ")
    a=b
    b=c

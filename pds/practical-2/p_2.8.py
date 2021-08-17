a = ['v','i','d','h','i']
print("join method:", ''.join(a))
b = ','.join(a)
print("split method:", b.split(','))
d = {
'neha':{'birthday':'Aug 1'},
'sohan':{'birthday':'june 21'},
'hiyan':{'birthday':'July 7'},
'divyam':{'birthday':'may 9'}
}
name = input("enter name:")
print("birthday:", d[name])

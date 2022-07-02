sum = 0
a = int(input("enter :"))
for i in range(1,a):
    if a % i == 0:
        sum = sum + i
if sum == a:
    print("s")
else:
    print("n")
    
    

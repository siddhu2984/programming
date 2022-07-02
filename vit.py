qn1 = input()
qn2 = input()
qn3 = input()
qn4 = input()
qn5 = int(input())

point = 0

if qn1 == "Yes":
    point = point + 1
if qn2 == "Yes":
    point = point + 1
if qn3 == "Yes":
    point = point + 2
else:
    point = point - 1
if qn4 == "Yes":
    point = point + 1
else:
    point = point - 1
if qn5 > 27:
    point = point + 3
else:
    point = point - 2

if point > 4:
    print("Can apply")
else:
    print("Cannot apply")

    
    
        
        
    

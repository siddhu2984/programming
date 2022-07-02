h = float(input())
a = int(input())
c = int(input())

if h and a and c > 0:
    if h >= 5.2 & h <= 5.8:
        if a in range(18,25) and c > 45:
                print("selected")
        else:
                print("not selected")
    else:
        print("not")
else:
    print("negative age")

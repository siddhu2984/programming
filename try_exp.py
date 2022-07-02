import sys

a = 10
b = [1,2,3,4]
c = 2
def div(a,b):
    if b == 0:
        raise Exception ("cannot divide by zer0")
    return a + b
try:
    #c = a + b[c]
    #raise IOErdsfror("this is a sample error")
    c = div(5,0)
    print(f"value of c is {c}")
    
except NameError as e:
    print("name error has happened")
    

except IndexError as e:
    print("Index error has happened")
    print(e)

except Exception as e:
    print("something else: {}".format(e))
    print("error : {}".format(sys.exc_info()))

else:
    print("All good")
    
finally:
    print("whatever the case i will work")

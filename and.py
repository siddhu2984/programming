class arithmetic:
    def add(a,b):
        c = a + b
        print(c)
        return
    def dub(self,a,b):
        c = a - b
        print(c)
        return
class calculate:
    def main():
        obj = arithmetic()
        a = int(input("enter a number"))
        b = int(input("enter a number"))
        arithmetic.add(a,b)
        obj.dub(a,b)
calculate.main()
        

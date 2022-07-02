'''class demo:
    def add():
        try:
            print("enter")
            a = int(input())
            b = int(input())
            c = a + b
            print (c)
        except ValueError:
            print("Exception : input must be an integer")
            return
demo.add()
'''
class demo:
    def add():
        try:
            print("enter")
            a = int(input())
            b = int(input())
            c = a + b
            print (c)
        except Exception:
            print("Exception : handled")
            return
demo.add()

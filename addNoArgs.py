'''
class calc:
    def ass(*arr):
        l = len(arr)
        res = sum(arr)
        print("sum of",l," num is ",res)
        return

class access:
    def main():
        
        calc.ass(10,20,20)
        calc.ass(10,20)
        return

access.main()
'''
'''
class calc:
    def ass(*arr):
        l = len(arr)
        res = 0
        for ele in arr:
            res = res + ele
        print("sum of",l," num is ",res)
        return

class access:
    def main():
        calc.ass(10,20,20)
        calc.ass(10,20)
        return

access.main()
'''
class grand:
    def fun(self):
        print("grand")
class parent(grand):
    def fun(self):
        print("parent")
class child(parent):
    def fun(self):
        print("child")
class access:
    def main():
        obj = child()
        obj.fun()
access.main

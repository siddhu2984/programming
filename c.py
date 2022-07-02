class test:
    def __init__(self):
        self.m2()
        return
  
   
    def main():
        test.m3()
        return
        

    def m1(self):
        print("m1")
        self.m4()
        return
    def m2(self):
        print("m2")
        self.m1()
        return
    def m3():
        obj = test()
        print("m3")
        
        
        return
    def m4(self):
        print("m4")
        return
        
test.main()


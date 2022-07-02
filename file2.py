class demo:
    a = None
    b = None
    def main():
         try :
             demo.a = open(".\INHERIT.PY",mode = "r")
             demo.b = open(".\output.txt",mode = "w")

             data = demo.a.read()
             demo.b.write(data)
             print("contant copied")
         except Exception as e:
             print("exception :",e)
         finally:
             if demo.a != None:
                demo.a.close()
             if demo.b != None:
                demo.b.close()

         return
demo.main()
             
             

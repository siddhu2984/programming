class demo:
    file = None
    def main():
        try:
            demo.file = open(".\calculator.py")
            print("file opened")
            data = demo.file.read()
            print(data)

        except Exception as e:
            print("Exception :",e)

        finally:
            if demo.file != None:
                demo.file.close()
                print("file closed....")
        return
demo.main()



    
        

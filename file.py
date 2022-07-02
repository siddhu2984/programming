class test:
    file = None
    def main():
        try:
            test.file = open("'C:\\Users\\siddh\\Desktop\\python'")
            print("file opened")
            data = test.file.read()
            print(data)
        except FileNotFoundError:
            print("exception:no such file")
        finally:
            test.file.close()
            print("file closed")
            return            

test.main()

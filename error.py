class LowBalenceError(Exception):
    def __init__(self,name):
        self.name = name
        return
class account:
    def __init__(self,balence):
        self.balence = balence
        return

    def withDraw(self,amount):
        if amount <self.balence:
            self.balence = self.balence - amount
            print(self.balence)
        else:
            err = LowBalenceError("insufficient amount")
            raise err
class Bank:
    def main():
        balence = int(input("amount")) 
        obj = account(balence )            
        draw = int(input("amount to withdraw"))
        try:
            obj.withDraw(draw)
        except LowBalenceError as msg:
            print("Exception :", msg)
        return
Bank.main()

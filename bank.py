class amount:
    balence=3000
    def deposit(amt):
        amount.balence = amount.balence + amt
        print(amt ,"deposited")
        return
    def withdraw(amt,wth):
        if amt <= wth:
            print("amount withdrawned :",wth)
            amount.balence = amount.balence - wth
            print("balence amount :",amount.balence) 
        else:
            print("no sufficirnt money")
        
class bank:
    def main():
        print("initial amount",amount.balence)
        amt=int(input("enter amount to deposit : "))
        amount.deposit(amt)
        print("balence after deposit : ",amount.balence)
        wth=int(input("enter amount to withdraw : "))
        amount.withdraw(amt,wth)
                

        
        return

bank.main()

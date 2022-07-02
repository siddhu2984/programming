from tkinter import *

root = Tk()
root.title("simple calculator")

e = Entry(root, width = 40, borderwidth = 5)
e.grid(row=0, column=1,columnspan=3,padx = 10,pady=10)

def calculate(num):
    e.insert(0, num)
    return

def clear():
    e.delete(0, END)

class access:
    num1 = 0
    num2 = 0
    num3 = 0
    def eq():
        a = e.get()
        e.delete(0, END)
        access.num1=int(a)
        if access.num3 == 1:
            d = access.num2 + access.num1
            e.insert(0 ,d)
            
        elif access.num3 == 2:
            d = access.num2 * access.num1
            e.insert(0 ,d)
            
        elif access.num3 == 3:
            d = access.num2 - access.num1
            e.insert(0 ,d)
            
        elif access.num3 == 4:
            d = access.num2 / access.num1
            e.insert(0 ,d)
    def ad():
        b = e.get()
        e.delete(0, END)
        access.num2 = int(b)
        access.num3 = 1
        
    def mul():
        b = e.get()
        e.delete(0, END)
        access.num2 = int(b)
        access.num3 = 2
      
    def sub():
        b = e.get()
        e.delete(0, END)
        access.num2 = int(b)
        access.num3 = 3
        
    def div():
        b = e.get()
        e.delete(0, END)
        access.num2 = int(b)
        access.num3 = 4
       
button1 = Button(root, text = "1", padx = 40, pady = 20,command = lambda:calculate(1))
button2 = Button(root, text = "2", padx = 40, pady = 20,command = lambda:calculate(2))
button3 = Button(root, text = "3", padx = 40, pady = 20,command = lambda:calculate(3))
button4 = Button(root, text = "4", padx = 40, pady = 20,command = lambda:calculate(4))
button5 = Button(root, text = "5", padx = 40, pady = 20,command = lambda:calculate(5))
button6 = Button(root, text = "6", padx = 40, pady = 20,command = lambda:calculate(6))
button7 = Button(root, text = "7", padx = 40, pady = 20,command = lambda:calculate(7))
button8 = Button(root, text = "8", padx = 40, pady = 20,command = lambda:calculate(8))
button9 = Button(root, text = "9", padx = 40, pady = 20,command = lambda:calculate(9))
button0 = Button(root, text = "0", padx = 40, pady = 20,command = lambda:calculate(0))
buttoneq = Button(root, text = "=", padx = 40, pady = 20,command = access.eq)
buttonclr = Button(root, text = "clrscr", padx = 40, pady = 20,command = clear)
buttonadd = Button(root, text = "+", padx = 40, pady = 20,command = access.ad)
buttonsub = Button(root, text = "-", padx = 40, pady = 20,command = access.sub)
buttonmul = Button(root, text = "x", padx = 40, pady = 20,command = access.mul)
buttondiv = Button(root, text = "/", padx = 40, pady = 20,command = access.div)


button1.grid(row=3 ,column=3)
button2.grid(row=3 ,column=2)
button3.grid(row=3 ,column=1)
button4.grid(row=2 ,column=3)
button5.grid(row=2 ,column=2)
button6.grid(row=2 ,column=1)
button7.grid(row=1 ,column=3)
button8.grid(row=1 ,column=2)
button9.grid(row=1 ,column=1)
button0.grid(row=4 ,column=2)
buttoneq.grid(row=4 ,column=1)
buttonclr.grid(row=6 ,column=2)
buttonadd.grid(row=4 ,column=3)
buttonsub.grid(row=5 ,column=1)
buttonmul.grid(row=5 ,column=2)
buttondiv.grid(row=5 ,column=3)



    


class find:
    def even(num):
        if num % 2 == 0:
            print(num, " is even")
        else:
            print(num, "is odd")

    def perfect(num):
         sum = 0
         for i in range(1,num):
             if num % i == 0:
                 sum = sum + i
         if sum == num:
             print(num,"is strong")
         else:
             print(num,"not strong")
    

    def prime(num):
        a = 0
        for i in range(1,num+1):
            if i % num == 0:
                if i == 1 and num: 
                    print(i,"is prime")
                else:
                    print(i,"not prime")
class execute:
    def main():  
       num = int(input("enter"))
       find.even(num)
       find.perfect(num)
       find.prime(num)
        
execute.main()

            
 
            
                
                
                
    

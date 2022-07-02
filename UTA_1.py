'''
n = int(input())
b = []
for i in range(0,n):
    a = int(input())
    b.append(a)
print(b)
len = len(b)
print(b[0:len-1:2])
'''
'''
def remove_nums(int_list):
  #list starts with 0 index
  
  position = 3 - 1 
  idx = 0
  len_list = (len(int_list))
  print(f"len = {len_list}")
  while len_list>0:
    idxa = (position+idx)
    print("idxa",idxa)
    idx = idxa%len_list
    print("aa",idx)
    print(int_list.pop(idx))
    len_list -= 1
nums = [10,20,30,40,50,60,70,80,90]
remove_nums(nums)

a= 10
b= 20
print(a,b)
'''
#Initialize array   
arr = [5, 2, 8, 7, 1] 
temp = 0  
   
#Displaying elements of original array  
print("Elements of original array: ") 
for i in range(0, len(arr)):
    print(arr[i], end=" ")  
   
#Sort the array in ascending order  
for i in range(0, len(arr)):  
    for j in range(i+1, len(arr)):
        
        if(arr[i] > arr[j]):  
            temp = arr[i] 
            arr[i] = arr[j]  
            arr[j] = temp  
   
print()  
   
#Displaying elements of the array after sorting  
  
print("Elements of array sorted in ascending order: ")  
for i in range(0, len(arr)):  
    print(arr[i], end=" ") 
    

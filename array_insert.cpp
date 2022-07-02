// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
// You need to insert the given element at the given index. 
    // After inserting the elements at index, elements
    // from index onward should be shifted one position ahead
    // You may assume that the array already has sizeOfArray - 1
    // elements.
    class Solution{
  public:
    //Function to insert a element at a given index in an array.
    void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
    {
        // if given index is last index we simply assign the element at last index.
        if(index == sizeOfArray-1)
        {
            arr[index] = element;
            return;
        }
        
        //if given index is not last index we need to shift all the elements starting
        //from that index to the last element towards right by 1 position.
        arr[sizeOfArray-1] = -1;
        //we iterate from last index to the index given.
        for(int i = sizeOfArray-1; i > index; i--)
        {
            int temp = arr[i];
            arr[i]=arr[i-1];
            arr[i-1] = temp;
        //Then we insert the given element at given index.
        arr[index] = element;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin>>t;//Input testcases
    while(t--)
    {
        
        int sizeOfArray; 
        
        //input size of Array
        cin>>sizeOfArray;
        
        int arr[sizeOfArray];
        
        //input elements in the Array
        for(int i = 0; i < sizeOfArray-1; i++)
        cin>>arr[i];
        
        int index;
        //input index
        cin>>index;
        int element;
        //input element
        cin>>element;
        Solution obj;
        //calling inserstAtIndex() function
        obj.insertAtIndex(arr, sizeOfArray, index, element); //Complete this function
        
        for(int i = 0; i < sizeOfArray; i++)//Printing the array for verification
        cout<<arr[i]<<" ";
        
        cout<<endl;
        
    }
    
	return 0;
}  // } Driver Code Ends
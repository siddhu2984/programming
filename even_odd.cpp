/*#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"enter number";
    cin>>x;
    if(x<0){
        cout<<"negative";
    }
    else if(x>0){
        cout<<"positive";
    }
    else{
        cout<<"zero";
    }
        
}*/
// { Driver Code Starts
#include<stdio.h>


 // } Driver Code Ends
//User function Template for C

//Function to rotate an array by d elements in counter-clockwise direction. 
void rotateArr(int arr[], int d, int n){
    // code here
    int arr2[d];
    for(int i=0;i<d;i++){
        arr2[i]=arr[i];
    }
    for(int i=d,j=0;i<n;i++,j++){
        arr[j]=arr[i];
    }
    for(int i=0,j=n-d;j<n;i++,j++){
        arr[j]=arr2[i];
    }
}

// { Driver Code Starts.

int main() {
	int t;
	//taking testcases
	scanf("%d",&t);
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    scanf("%d%d",&n, &d);
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        scanf("%d",&arr[i]);
	    }
	    //calling rotateArr() function
	    rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        printf("%d ",arr[i]);
	    }
	    printf("\n");
	}
	return 0;
}  // } Driver Code Ends
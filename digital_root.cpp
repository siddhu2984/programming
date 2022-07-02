// { Driver Code Starts
//Initial Template for C++


#include <iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int digitalRoot(int n)
    {
        int te=0;
    while(n>=10){
        te=te+(n%10);
        n/=10;
    }
    
    te=n+te;
    cout<<te<<"\n";
    /*if(te>=10){
        n = te;
        digitalRoot(n);
        }
    else{    
        cout<<te;
        }
    
      */  //Your code here
    }

// { Driver Code Starts.


int main() {
	int n;
	cin>>n;//taking number n
	digitalRoot(n);
	return 0;
}  // } Driver Code Ends
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=1,b=1,sum;
    cout<<a<<" ";
    for(int i=1;i<n;i++){
        cout<<b<<" ";
        sum = a + b;
        a = b;
        b = sum;
    }
    cout<<b<<" ";
}
// { Driver Code Starts
//Initial Template for C++
/*
#include <iostream>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Complete this function
    int b=1,a=1,sum=0,temp=10;
    int fibonacci(int n)
    {
        for(int i=1;i<n;i++){
        sum = a + b;
        a = b;
        b = sum;
        temp = b;

    }
    return temp;
    }
};

// { Driver Code Starts.
int main() {
	int T;
	
	//taking total testcases
	cin>>T;
	    int n;
	    //taking number n
	cin>>n;
	Solution ob;
	    //calling fibonacci() function
	cout<<ob.fibonacci(n)<<endl;
	return 0;
}  // } Driver Code Ends*/
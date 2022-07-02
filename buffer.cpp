/*#include<iostream>
using namespace std;

int main(){
    int x , y;
    cout<<"enter num 1:";
    cin>>x;
    cout<<"enter num 2:";
    cin>>y;
    cout<<x*y;
}*/
// { Driver Code Starts
#include<iostream> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    long long int factorial(int N){
        int sum=1;
        for(int i=1;i<=N;i++){
            sum = sum * i;

        }
        return sum;
       //c
        //code here
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
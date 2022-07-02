/*#include<iostream>
using namespace std;

int main(){
    int x = 10, y = 20;
    bool res = (x>0 && x<100);
    cout<<res<<"\n";
    res = (x>0 || x>y);
    cout<<res<<"\n";
    cout<<(!res);

}*/
// { Driver Code Starts
//Initial Template for C++

#include<iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//code below 
//write a function add() taking two parameters a and b
//returning a value by adding them
auto add(int a, int b){
    auto x = (a + b);
    return x ;
}



// { Driver Code Starts.
 
int main()
{
    
    int t;
    cin >> t;
    
    while(t--){
        
        int c;
        cin>>c;
        if(c==1)
        {
            int a, b;
            cin >> a >> b ;
            cout << add(a, b) << endl;
            
        }
        else if(c==2)
        {
            double a, b;
            cin >> a >> b ;
            cout << add(a, b) << endl;
                
        }
        else
        {
            long long a, b;
            cin >> a >> b ;
            cout << add(a, b) << endl;
        
        }
    }
    return 0;
}   // } Driver Code Ends
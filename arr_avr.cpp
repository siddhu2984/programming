#include<iostream>
using namespace std;


int main()
{
    int n; 
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i ++)
    {
        cin >> a[i] ; 
    }
    int sum = 0 ;
    int len = sizeof(a)/sizeof(a[0]);
    for(int x:a){
        sum = sum + x;
    }
    cout << sum/len;
    return 0;
}
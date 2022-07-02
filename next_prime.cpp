#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    while(true){
        int i;
        for(i=2;i<x;i++){
            if(x%i==0){
                break;
            }
        }
        if(i==x){
            cout<< x;
        x++;
        } 
       
    
        
        
    }
}
/*
#include<iostream>
using namespace std;

int nextPrime(int n){
    n++;
    while(true){
        int i;
        for(i = 2; i < n; i++){
            if(n % i == 0)
                break;
        }
        if(i == n)
            return n;
        n++;
    }
}

int main()
{
    int n;
    cin >> n;
    
    cout << nextPrime(n);
    
    return 0;
}
*/
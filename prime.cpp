#include<iostream>
using namespace std;
int isPrime(int x){
    int w= 0;
    for(int i=1;i<x+1;i++){
        if(x%i==0){
            w++;
        }
    }
    if(w==2){
        cout<<"prime\n";
    }
    else{
        cout<<"not prime\n";
    }
}
int factor(int x){
    for(int i=1;i<=x;i++){
        if(x%i==0){
            cout<<i<<",";
        }
    }
}
int main(){
    int x;
    cout<<"Enter a num";
    cin>>x;
    isPrime(x);
    factor(x);
}

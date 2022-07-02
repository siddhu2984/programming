#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x;
    while(true){
        y=0;
        x=x+1;
        for(int i=2;i<x;i++){
            if(x%i==0){
                y=y+1;
                break;
            }
        }
        if(y==0){
            cout<<x;
            break;
        } 
    }
}
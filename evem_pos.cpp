#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"enter a num";
    cin>>x;
    if(x>0){
        if(x%2==0){
            cout<<"even_pos";
        }
        else{
            cout<<"odd_pos";
        }
    }
    else if(x<0){
        if(x%2==0){
            cout<<"even_neg";
        }
        else{
            cout<<"odd_neg";
        }
    }
    else{
        cout<<"zero";
    }
    
}
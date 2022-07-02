#include<iostream>
using namespace std;

int first_digit(int x){
    while(x>10){
        x/=10;
    }
    return x;
}
int main(){
    int x;
    cin>>x;
    cout<<first_digit(x);
}
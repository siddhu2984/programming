#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int len =1;
    while(n>=10){
        n/=10;
        len++;
    }
    cout<<len;
}
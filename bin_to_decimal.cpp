#include<iostream>
using namespace std;

int main(){
    int t=0,b,d,sum;
    cin>>b;
    while(b>=0){
        d=b%10;
        sum=b*2^t;
        d/=d;
        t++;
    }
}
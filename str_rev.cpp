#include<iostream>
using namespace std;

int main(){
    string str, strr;
    cin>>str;
    int n=0;
    for(int i=str.length()-1;i>-1;i--){
        strr=strr+str[i];
    }
    cout<<strr;
}
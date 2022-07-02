#include<iostream>
using namespace std;

int main(){
    string str = "siddharth";
    for(int i=0;i<str.length();i++){
        str[i]=str[i]+3;
    }
    cout<<str;
}
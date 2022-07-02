#include<iostream>
using namespace std;

int main(){
    string str="greeksfor";
    str=str+"greeks";
    cout<<str<<"\n";
    cout<<str.length()<<"\n";
    cout<<str.substr(1,5)<<"\n";
    cout<<str.find("g")<<"\n";
}
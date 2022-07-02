#include<iostream>
using namespace std;

int main(){
    int sum=1;
    string a="sid here is have";
    for(int i=0;i<a.length();i++){
        if(a[i]==' '){
            sum=sum+1;
        }
    }
    cout<<sum;
}
#include<iostream>
using namespace std;

int main(){
    int arr[] = {12,23,34,3,45,42};
    for(int &x:arr)
        x = x*2;
    for(int x:arr)
        cout<<x<<" ";
    return 0;
}
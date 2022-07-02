#include <iostream>
using namespace std;

int main(){
    int *p = new(nothrow) int ;
    cin>>*p;
    cout<<*p;
    delete p;
    int *q= new(nothrow) int[5];
    for(int i=0;i<5;i++){
        cin>>q[i];
        cout<<q[i]<<" ";
    }
    delete q;
}
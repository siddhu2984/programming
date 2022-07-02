#include<iostream>
using namespace std;

int main(){
    int x = 0;
    int *pt = &x;
    int *paa;
    cout<<sizeof(*paa);
    cout<<*pt<<"\n";
    x=x+30;
    cout<<pt<<"\n";
    cout<<x<<"\n";
}
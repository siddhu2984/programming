#include<iostream>
using namespace std;

int main(){
    int x = 100;
    cout<<sizeof(int)<<"\n"
        <<sizeof(char)<<"\n"
        <<sizeof(long long)<<"\n"
        <<sizeof(x)<<"\n"
        <<sizeof(10.5);
        return 0;
}
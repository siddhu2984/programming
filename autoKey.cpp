/*#include<typeinfo>
#include<iostream>

using namespace std;

int main(){
    auto a = 10;
    auto b = 23.44;
    cout<<a<<"\n"<<b<<"\n";
    cout<<typeid(a).name()<<"\n"
    <<typeid(b).name();

    return 0;
}*/
#include<iostream>
using namespace std;

int main(){
    int t=0,sum=0,base=1,b,d;
    cout<<"enter :";
    cin>>b;
    while(b>0){
        d=b%10;
        sum= sum+(d*base);
        b/=10;
        base*=2;
    }
    cout<<sum;
}
#include<iostream>
using namespace std;

class A {
    int a;
 
public:
    A(){
       cin>>a;
      }
    friend void showA(A,A);
};
 
void showA(A aq,A b)
{
    // Since showA() is a friend, it can access
    // private members of A
    cout << "A::a=" << aq.a;
}
 
int main()
{
    A a,b;
    showA(a,b);
    return 0;
}
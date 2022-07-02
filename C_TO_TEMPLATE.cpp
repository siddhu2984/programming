/*#include<iostream>
using namespace std;
class calculator{
    private:
    int a1,a2;
    public:
    calculator(int a, int b);
    int add();
    int sub();
};
calculator::calculator(int a, int b){
    a1 = a;
    a2 = b;
}
calculator::add(){
    int c;
    c = a1 + a2;
    return c;
}
calculator::sub(){
    int c;
    c = a1 - a2;
    return c;
}
int main(){
    calculator r(10,20);
    cout<<r.add()<<r.sub();

}
*/

#include<iostream>
using namespace std;

template <class T>
class calculator{
    private:
    T a;
    T b;
    public:
    calculator(T a, T b);
    T add();
    T sub();
};
template <class T>
calculator<T>::calculator(T c, T d){
    this->a = c;
    this->b = d;
}
template <class T>
T calculator<T>::add(){
    T c;
    c = a + b;
    return c; 
}
template <class T>
T calculator<T>::sub(){
    T c;
    c = a - b;
    return c;
}

int main(){
    calculator<int> ar(10,20);
    cout<<ar.add()<<" "<<ar.sub()<<endl;
    calculator<float> ar1(19.6,22.4);
    cout<<ar1.add()<<" "<<ar1.sub()<<endl;
}
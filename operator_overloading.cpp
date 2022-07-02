

#include <iostream>
using namespace std;
 
class ComplexNumber{
  private:
  int real;
  int imaginary;
  public:
  ComplexNumber(int real, int imaginary){
    this->real = real;
    this->imaginary = imaginary;
  }
  void print(){
    cout<<real<<" + i"<<imaginary;
  }
  ComplexNumber operator+ (ComplexNumber c2){
    Complex res;
    res.real = this->real+c2.real;
    res.imaginary = this->imaginary + c2.imaginary;
    return res;
  }
};
int main() {
    ComplexNumber c1(3,5);
    ComplexNumber c2(2,4);
    ComplexNumber c3 = c1 + c2;
    c3.print();
    return 0;
}
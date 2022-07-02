#include<iostream>
using namespace std;

class student{
    private:
        int num;
        string name;
        string department;
    public:
        student(int n,string s){
            num=n;
            name=s;         
        }
        void display(){
            cout<<num<<name;
        }
};

int main(){
    student s1=student(1,"sidd");
    student s2=student(2,"varun");
    s1.display();
    s2.display();
}
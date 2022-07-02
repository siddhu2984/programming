#include<iostream>
using namespace std;

struct student
{
    int rollno;
    string name;
    string address;
};
int main(){
    student s={121,"ABC","XYZ"};
    cout<<s.rollno<<" "
        <<s.name<<" "
        <<s.address;
    return 0;
}
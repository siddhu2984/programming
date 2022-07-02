/*
#include<iostream>
using namespace std; 
struct rectangle{
    int length;
    int breath;
};
void initialize(struct rectangle *r,int l,int b){
    r->length = l;
    r->breath = b;
}
int ar(struct rectangle r){
    return r.length*r.breath;
}
void changelength(struct rectangle *r,int l){
    r->length = l;
}

int main(){
    rectangle r={0,0};
    int a;
    initialize(&r,10,20);
    cout<<r.length<<" "<<r.breath<<endl;
    cout<<ar(r)<<endl;
    changelength(&r,50);
    cout<<r.length<<" "<<r.breath<<endl;
    cout<<ar(r)<<endl;
}

#include<iostream>
using namespace std; 
struct rectangle{
    int length;
    int breath;

void initialize(int l,int b){
    length = l;
    breath = b;
}
int ar(){
    return length*breath;
}
void changelength(int l){
    length = l;
}
};

int main(){
    rectangle r={0,0};
    int a;
    r.initialize(10,20);
    cout<<r.length<<" "<<r.breath<<endl;
    cout<<r.ar()<<endl;
    r.changelength(50);
    cout<<r.length<<" "<<r.breath<<endl;
    cout<<r.ar()<<endl;
}

*/

#include<iostream>
using namespace std; 
class rectangle{
public:
    int length;
    int breath;

rectangle(int l,int b){
    length = l;
    breath = b;
}
int ar(){
    return length*breath;
}
void changelength(int l){
    length = l;
}
};

int main(){
    rectangle r(10,5);
    cout<<r.length<<" "<<r.breath<<endl;
    cout<<r.ar()<<endl;
    r.changelength(50);
    cout<<r.length<<" "<<r.breath<<endl;
    cout<<r.ar()<<endl;
}
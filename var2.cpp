#include<iostream>
using namespace std;

class point{
    public:
        int p1[2];
        int p2[2];
        int su[2];
        
        void sum(){
            //sum[0]=p1[0]+p2[0];
           // sum[1]=p1[1]+p2[1];
            cout<<su[0]<<","<<su[1];
        }
};

int main(){
    point p;
    for(int i=0;i<2;i++){
        cin>>p.p1[i];
    }
    p.sum();
}
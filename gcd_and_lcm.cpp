/*#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    int z= min(x,y);
    int temp =0;
    for(int i=1;i<=z;i++){
        if(x%i==0 && y%i==0){
            temp = i;
        }
    }
    cout<<temp;
}*/
#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    int z= max(x,y);
    int stop = x*y;
    int temp =0;
    for(int i=z;i<=stop;i++){
        if(i%x==0 && i%y==0){
            temp = i;
            break;
        }
    }
    cout<<temp;
}
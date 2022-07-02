#include<iostream>
using namespace std;

int main(){
    int att[3][2]={{1,2},{3,3},{4,5}};
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<att[i][j]<<" ";
        }
        cout<<'\n';
    }
}
#include<iostream>
using namespace std;

int main(){
    int x = 0,y = 0;
    char move;
    cout<<"Enter a choke:";
    cin>>move;
    switch(move){
        case 'L':x--;
                break;
        case 'R':x++;
                break;
        case 'U':y++;
                break;
        case 'D':y--;
                break;
        default:cout<<"invalid choice";
    }
    cout<<x<<" "<<y;
}
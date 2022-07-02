#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30};
    int *ar = arr;
    //int (*a)[3] = &arr;
    cout<<*ar<<" "<<ar<<"\n";
    ar=ar+2;
    cout<<*ar<<" "<<ar<<"\n";
    ar--;
    cout<<*ar<<" "<<ar<<"\n";
    cout<<*(ar+2);
}
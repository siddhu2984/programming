#include<iostream>
using namespace std;

int max(const int ar[]){
    int temp=ar[0];
    for(int i:ar){
        if(temp<i){
            temp=i;
        }
    }
    cout<<temp;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    max(arr);
    

}
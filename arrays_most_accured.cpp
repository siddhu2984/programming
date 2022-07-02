#include<iostream>
using namespace std;

int mostacc(int arr[],int n){
    int su =0;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                sum+=1;
            }
        }
        if(su<sum){
            su = sum;
        }
    }
   // cout<<su;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                sum+=1;
            }
        }
        if(su==sum){
            cout<<"most repeated num is "<<arr[i];
            break;
        }
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mostacc(arr,n);
}
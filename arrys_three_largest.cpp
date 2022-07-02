#include<iostream>
using namespace std;

int threelargest(int arr[],int n){
    int num1=-1,num2=-1,num3=-1;
    if(n>=3){
        num1=arr[0];
        num2=arr[1];
        num3=arr[2];
    }
    else if(n>=2){
        num1=arr[0];
        num2=arr[1];
    }
    else{
        num1=arr[0];
    }
    for(int i=0;i<n;i++){
        if(num1<arr[i]){
            num1=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(num2<arr[i] && num1!=arr[i]){
            num2=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(num3<arr[i] && num1!=arr[i] && num2!=arr[i]){
            num3=arr[i];
        }
    }
    
    cout<<num1<<" "<<num2<<" "<<num3;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    threelargest(arr,n);
}
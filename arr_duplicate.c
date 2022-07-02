#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int t=0;
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            if(arr[i]==arr[j]){
                t=t+1;
                break;
            }
        }
        if(t==0){
            printf("%d \n",arr[i]);
        }
        else{
            printf("%d is no \n",arr[i]);
        }
    }
}
#include<stdio.h>

int main(){
    int arr[50];
    for(int i=0;i<50;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=1;i<=50;i++){
        if(arr[i-1]!=i){
            printf("%d", i);
            break;
        }
    }
}
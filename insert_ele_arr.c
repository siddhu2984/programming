#include<stdio.h>

int main(){
    int n,ele,pos;
    scanf("%d",&n);
    int arr[n+1];
    int ar[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("element:");
    scanf("%d",&ele);
    printf("positon:");
    scanf("%d",&pos);
    printf("\n");
    for(int i=0;i<pos;i++){
        ar[i]=arr[i];
    }
    ar[pos]=ele;
    for(int i=pos+1;i<n+1;i++){
        ar[i]=arr[i-1];
    }
    for(int i=0;i<n+1;i++){
        printf("%d ",ar[i]);
    }

}
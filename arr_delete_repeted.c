#include<stdio.h>

int main(){
    int n,num=0;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int m=j;m<n-1;m++)
                    arr[m]=arr[m+1];
                    n--;
                }
            }
        }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}


/*#include<stdio.h>
 
int main()
{
int i,j,k,n,a[30];
printf("How many elements?");
scanf("%d",&n);
printf("\nEnter elements of array\n");
for(i=0;i<n;++i)
scanf("%d",&a[i]);
for(i=0;i<n;++i)
for(j=i+1;j<n;)
{
if(a[i]==a[j])
{
for(k=j;k<n-1;++k)
a[k]=a[k+1];
--n;
}
else
++j;
}
printf("\n");
for(i=0;i<n;++i)
printf("%d ",a[i]);
 
return 0;
}
/*
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int c=j;c<n-1;c++){
                    arr[c]=arr[c+1];
                    c--;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}*/
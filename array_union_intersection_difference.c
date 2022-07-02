/*#include<stdio.h>


void unionn(int arr1[],int arr2[],int n1,int n2){
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                for(int k=j;k<n2;k++){
                    arr2[k]=arr2[k+1];
                    n2--;
                }
            }
        }
    }
    int arr3[n1+n2];
    for(int i=0;i<n1;i++){
        arr3[i]=arr1[i];
    }
    for(int i=n1;i<n2+n1;i++){
        arr3[i]=arr2[i];
    }
    for(int i=0;i<n2+n1;i++){
        printf("%d ",arr3[i]);
    }
}

int main(){
    int n1,n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    
    int arr1[n1],arr2[n2];
    printf("enter elemets for array 1");
    printf("\n");
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter elemets for array 2");
    printf("\n");
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }    
    unionn(arr1,arr2,n1,n2);
    

}*/
// C program to find union of
// two sorted arrays
#include <stdio.h>

void Union(int arr1[], int arr2[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (arr1[i] < arr2[j])
			printf("%d ", arr1[i++]);
		else if (arr2[j] < arr1[i])
			printf("%d ", arr2[j++]);
		else {
			printf("%d ", arr2[j++]);
			i++;
		}
	}

	while (i < m)
		printf("%d ", arr1[i++]);
	while (j < n)
		printf("%d ", arr2[j++]);
}

void Intersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else 
        {
            printf("%d ", arr2[j++]);
            i++;
        }
    }
}

void difference(int arr1[],int arr2[],int n,int m)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                n--;
                for(int k=i;k<n;k++){
                    arr1[k]=arr1[k+1];
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ", arr1[i]);
    }
}
int main()
{   
    int m,n;
    scanf("%d %d",&m,&n);
    int arr1[m],arr2[n];
    for(int i=0;i<m;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d", &arr2[i]);
    }

	/*int arr1[] = { 1, 2,3,6,7,4, 5 };
	int arr2[] = { 2, 3,6,7 };
	int m = sizeof(arr1) / sizeof(arr1[0]);
	int n = sizeof(arr2) / sizeof(arr2[0]);*/
	Union(arr1, arr2, m, n);
    printf("\n");
    Intersection(arr1, arr2, m, n);
    printf("\n");
    difference(arr1, arr2, m, n);
	return 0;
}

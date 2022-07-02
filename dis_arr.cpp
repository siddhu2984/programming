#include<iostream>
using namespace std;

int distinct(int a[],int n){
    int m =0;
    for(int i=0;i<n;i++){
        bool d = true;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                d = false;
            }
        }
        if(d==true){
            m=m+1;
        }
    }
    cout<<m;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    distinct(arr,n);
}/*
#include<iostream>
using namespace std;

int countDistinct(int a[], int n)
{
    int count = 0;
    bool isDistinct = true;
    for(int i = 0; i < n; i++)
    {
        isDistinct = true;
        for(int j = i-1; j >= 0; j--)
        {
            cout<<a[j]<<" ";
            if(a[i]==a[j])
            {  
                isDistinct = false;
                break;
            }
            cout<<"\n";
        }
        if(isDistinct==true)
        {
            count ++ ;
        }
    }
    return count;
}

int main()
{
    int n; 
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i ++)
    {
        cin >> a[i] ; 
    }
    cout << countDistinct(a,n);
    return 0;
}*/
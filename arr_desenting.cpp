#include<iostream>
using namespace std;

void desetinh(int arr[],int &mai){
    for(int i=0;i<7;i++){
        if(mai<arr[i]){
            mai=arr[i];
        }
    }
    cout<<mai<<" ";
    
}
int main(){
    int num[10]={50,23,543,12,32,21,554,122,234,122};
    int desc;
    /*for(int i=0;i<7;i++){
        if(mai<arr[i]){
            mai=arr[i];
        }
    }
    cout<<mai<<" ";
    desetinh(arr,mai);*/
   /* for (int i = 0; i < 10; i++)   //  'for' loop is used for sorting the numbers in descending order
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (num[i] < num[j])
            {
                desc = num[i];
                num[i] = num[j];
                num[j] = desc;
            }
        }
    }
    cout<<"\n Numbers in Descending Order : \n";
    for (int i = 0; i < 10; ++i)
    {
        cout<<" ";
        cout<<num[i];
        cout<<"\n";
    }
}

*/
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(num[i]<num[j]){
                desc = num[i];
                num[i] = num[j];
                num[j] = desc;
            }
        }
    }
    for(int i=0;i<10;i++){
        cout<<num[i]<<" ";
    }
}
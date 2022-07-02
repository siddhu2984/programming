/*#include<iostream>
using namespace std;
#include<string.h>
string arr[20];
int q = 0;

void fnn(long int a,int i,int n){
    string str= to_string(a);
    int nn = str.length();
    int nnn= nn-i;
    string f="a";
    for(int j=nnn;j<nn;j++){
        f=f+str[j];     
    }
    arr[q]=f;
    q++;

  //  cout<<nn<<" "<<nnn<<" ";
}
int main(){
    long int a;
    int aa,sum;
    cin>>a>>aa;
    long int temp2=a,temp;
    while(temp2>10){
        temp = temp2;
        int sum=0,i=0;
       // cout<<temp<<" "<<temp2<<endl;
        while(temp>0){
        int n;
        i++;
        n=temp%10;
        temp=temp/10;
        sum = sum+n;
       // cout<<sum<<endl;
        if(sum==aa){
            fnn(temp2,i,n);
            break;
            
        }
        
    }
    temp2 = temp2/10;
    }
    for(int i=q-1;i>-1;i--){
        int w = arr[i].length();
        cout<<arr[i].substr(1,w)<<"\t";
    }

}*/

#include<iostream>
using namespace std;
const int n;
class A{
    public:
    int arr[n];
    A(int ar[]){
        for(int i=0;i<n;i++){
            arr[i]=ar[i];
        }
    }
    void fn();
};
void A::fn(){
        for(int i=0;i<5;i++){
            cout<<arr[i];
        }   
}

/*class BBBB: public A{
    public:
    void fn();
};
*/

int main(){
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    A b(arr);
    b.fn();

}
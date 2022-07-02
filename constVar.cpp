#include<iostream>
using namespace std;
int m=0;
class Showroom
{
    private:
    string pname[50];
    int pc[50];
    
    public:
    int quat[50];
    
    Showroom(int n)
    {
        for(int i=0;i<n;i++)
        {
        m++;
        cin>>pname[i];
        cin>>pc[i];
        cin>>quat[i];

        }
    }
    void stock();
};
void Showroom :: stock()
{
    int i,ls=0,a=quat[0];
    for(i=1;i<m;i++)
    {
       if(a < quat[i]){
           ls=i;
           a = quat[i];
       }
    }
    cout<<pname[ls]<<" "<<pc[ls]<<" "<<quat[ls];
}
int main()
{
    
    int n;
    cin>>n;
    Showroom Sr(n);

    Sr.stock();
    //print(n);
    return 0;
}
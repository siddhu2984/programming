/*#include<iostream>
using namespace std;

void printIndex(string text, string pat)
{
    int found = text.find(pat);
    while(found != string::npos)
    {
        cout << "Pattern found at " << found << '\n';
        found = text.find(pat, found+1);
    }
}

int main()
{
    string text, pat;
    cin >> text >> pat;
    printIndex(text, pat);
    return 0;
}*/

#include<iostream>
using namespace std;

void printindex(string t,string p){
    int found=t.find(p);
    while(found!= string::npos){
        cout<<found<<"\n";
        found = t.find(p,found+1);
    }
}

int main(){
    string t,p;
    cin>>t>>p;
    printindex(t,p);
}
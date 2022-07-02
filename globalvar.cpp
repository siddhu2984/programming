/*#include<iostream>
using namespace std;
int x;//global variable
int main(){
    cout<<x;
    return 0;
}
*/
#include<iostream>
using namespace std;
extern int x;//global variable
int main(){
    cout<<x;
    return 0;
}
int x = 10;

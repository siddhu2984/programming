#include <iostream>
using namespace std;
 
class board
{
    private:
        int state[8];
    public:
        
        board(int arr[])
        {
            for(int i=0;i<8;i++){
                state[i] = arr[i];
            }
        }
        void print();
};
 
void board::print()
{
    for (int y=0; y<8; y++)
    {
        cout<< state[y] << " ";
        cout << "\n";
    }
}
 
int main()
{
    int test[8] = { 0, 1, 2, 3, 4, 5, 6, 7 };
 
    board b(test);
    b.print();

    return 0;
}
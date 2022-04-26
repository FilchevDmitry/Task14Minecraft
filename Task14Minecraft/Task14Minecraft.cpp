#include <iostream>
using namespace std;

int main()
{
    cout << "Minecraft!\n";
    int h=0;
    bool mine[10][5][5];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            for (int k = 0; k < 5; k++)
            {
                mine[i][j][k] = true;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                cout << mine[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}



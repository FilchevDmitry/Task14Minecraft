#include <iostream>
using namespace std;

int main()
{
    cout << "Minecraft!\n";
    int h=0;
    bool mine[3][3][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            for (int k = 0; k < 3; k++)
            {
                mine[i][j][k] = true;
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cout << mine[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}



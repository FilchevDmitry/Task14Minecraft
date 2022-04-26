#include <iostream>
using namespace std;

int main()
{
    cout << "Minecraft!\n";
    int h=0;
    bool mine[5][5][10];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter the height of the columns (1-10)\n";
            cin >> h;
            for (int k = 0; k < 10; k++)
            {   
                if(k<h)
                    mine[i][j][k] = true;
                else
                    mine[i][j][k] = false;
            }
            h = 0;
        }   
    }
    cout << endl;
    cout << "Enter the desired cross section (1-10)\n";
    cin>>h;
    h--;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {            
          cout << mine[i][j][h] << " ";
        }
        cout << endl;
    }
}



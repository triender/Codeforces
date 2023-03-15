#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n[5][5];
    int position_row, position_column;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> n[i][j];
            if (n[i][j]==1)
            {
                position_row = i+1;
                position_column = j+1;
            } 
        }
    }
    cout << abs(position_row-3) + abs(position_column-3); 
    return 0;
}
    
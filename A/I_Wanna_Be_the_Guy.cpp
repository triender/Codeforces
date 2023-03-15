#include <iostream>
using namespace std;

int main()
{
    int number_of_level;
    cin >> number_of_level;
    int X, Y;
    cin >> X;
    int little_x[X];
    for (int i = 0; i < X; i++)
    {
        cin >> little_x[i];
    }

    cin >> Y;
    int little_y[Y];
    for (int i = 0; i < Y; i++)
    {
        cin >> little_y[i];
    }

    bool Can_pass_level[number_of_level];
    for (int i = 1; i <= number_of_level; i++)
    {
        Can_pass_level[i] = false;
    }

    for (int i = 0; i < X; i++)
    {
        Can_pass_level[little_x[i]] = true;
    }
    for (int i = 0; i < Y; i++)
    {
        Can_pass_level[little_y[i]] = true;
    }
    int Can_pass = 0;
    for (int i = 1; i <= number_of_level; i++)
    {
        if (Can_pass_level[i])
        {
            Can_pass += 1;
        }
    }

    if (Can_pass == number_of_level)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }

    return 0;
}

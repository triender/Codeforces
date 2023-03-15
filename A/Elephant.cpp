#include <iostream>
using namespace std;

int main()
{
    long int location, step;
    cin >> location;
    if (location <= 5)
    {
        cout << 1;
    } else if ((location % 5) == 0)
    {
        step = location/5;
        cout << step;
    } else
    {
        step = location/5 + 1;
        cout << step; 
    }
    return 0;
}

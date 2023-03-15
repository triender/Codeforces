#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int Passengers_leave[n], Passengers_enter[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Passengers_leave[i] >> Passengers_enter[i];
    }

    int Minimum_capacity = 0;
    int current_capacity = 0;
    for (int i = 0; i < n; i++)
    {
        current_capacity = current_capacity - Passengers_leave[i] + Passengers_enter[i];
        if (Minimum_capacity <= current_capacity)
        {
            Minimum_capacity = current_capacity;
        }
    }

    cout << Minimum_capacity;
    return 0;
}

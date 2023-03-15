#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a;
        cin >> a;
        if (a <= 2)
        {
            cout << 0 << endl;
        }
        else
        {
            if (a % 2 == 1)
            {
                cout << a / 2 << endl;
            }
            else
            {
                cout << a / 2 - 1 << endl;
            }
        }
    }
    return 0;
}

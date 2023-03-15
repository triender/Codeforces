#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, m, a, b;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        for (int j = 0; j < m; j++)
        {
            cin >> a >> b;
        }

        if (m < n)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
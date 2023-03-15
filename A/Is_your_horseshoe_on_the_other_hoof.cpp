#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int Color[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> Color[i];
    }
    sort(Color, Color + 4);
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        if (Color[i] == Color[i + 1])
        {
            count += 1;
        }
    }
    cout << count;
    return 0;
}

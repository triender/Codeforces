#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a%b == 0)
        {
            cout << 0;
        }else if (a < b)
        {
            cout << b-a;
        }else{
            cout << b-(a%b);
        }
        cout << endl;
    }

    return 0;
}
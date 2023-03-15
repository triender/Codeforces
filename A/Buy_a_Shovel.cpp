#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, r;
    cin >> k >> r;
    if (k % 10 == 0)
    {
        cout << 1;
    }
    else if (k % 10 == 1)
    {
        cout << r;
    }
    else if (k % 10 == 3 || k % 10 == 7 || k % 10 == 9)
    {
        for (int i = 1; i < 10; i++)
        {
            if (((k % 10) * i) % 10 == r)
            {
                cout << i;
                break;
            }
        }
    }else if (k%10 == 5 && r == 5)
    {
        cout << 1;
    }
    
    else if (k % 10 == 5)
    {
        cout << 2;
    }
    else
    {
        if (r % 2 == 0)
        {
            for (int i = 1; i < 10; i++)
            {
                if (((k % 10) * i) % 10 == r)
                {
                    cout << i;
                    break;
                }
            }
        }
        else
        {
            cout << 5;
        }
    }

    return 0;
}

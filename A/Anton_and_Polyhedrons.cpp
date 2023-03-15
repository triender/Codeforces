#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans;
    for (int i = 0; i < n; i++)
    {
        string Input;
        cin >> Input;
        switch (Input[0])
        {
        case 'T':
            ans += 4;
            break;
        case 'C':
            ans += 6;
            break;
        case 'O':
            ans += 8;
            break;
        case 'D':
            ans += 12;
            break;
        default:
            ans += 20;
            break;
        }
    }
    cout << ans;
    
    return 0;
}

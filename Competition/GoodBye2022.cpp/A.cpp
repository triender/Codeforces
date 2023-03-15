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
        int First[a], Second[b];
        for (int i = 0; i < a; i++)
            cin >> First[i];
        for (int i = 0; i < b; i++)
            cin >> Second[i];

        sort(First, First + a);

        for (int i = 0; i < b; i++)
        {
            First[0] = Second[i];
            sort(First, First + a);
        }
        
        long long sum = 0;
        for (int i = 0; i < a; i++)
            sum += First[i];
        cout << sum << "\n";
    }
    return 0;
}

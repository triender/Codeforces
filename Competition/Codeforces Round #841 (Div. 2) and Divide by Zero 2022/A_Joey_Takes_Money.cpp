#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;
        long long int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i]; 
        
        for (int i = 0; i < n - 1; i++)
        {
            a[0] = a[0] * a[i+1];
            a[i+1] = 1;
        }

        long long int ans = 0;
        for (int i = 0; i < n; i++)
            ans += a[i];
        cout << ans * 2022 << "\n";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int64_t Max_grid(int n){
    if (n == 1) return 1;
    return Max_grid(n - 1) + (n - 1) * n + n * n;
}

const int64_t mod = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int64_t n;
        cin >> n;
        // int64_t ans = Max_grid(n);
        int64_t ans = ((2 * n * (n+1)*(2*n+1))/6 - (n*(n+1))/2);
        cout << ans << endl;
    }
    return 0;
}

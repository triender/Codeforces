#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int m, n, a;
    cin >> m >> n >> a;

    if ((a == m) and (a == n))
    {
        cout << 1;
    }
    else if (((m >= 2) and (n >= 2)) and (a == 1))
    {
        cout << m * n;
    }
    else if ((m >= 2) and (n >= 2))
    {
        long long int integral_m, integral_n, remainder_m, remainder_n;
        integral_m = m / a;
        remainder_m = m % a;
        integral_n = n / a;
        remainder_n = n % a;
        if ((remainder_m == 0) and (remainder_n == 0))
        {
            cout << integral_m * integral_n;
        }else
        
        if (remainder_m == 0)
        {
            cout << integral_n * integral_m + integral_m;
        }
        else if (remainder_n == 0)
        {
            cout << integral_m * integral_n + integral_n;
        }
        else
        {
            cout << integral_n * integral_m + integral_n + integral_m + 1;
        }
    }
    else if (((m == 1) or (n == 1)) and (a > 1))
    {
        cout << 1;
    }
    else if ((m == 1) and (a == 1))
    {
        cout << n;
    }
    else if ((n == 1) and (a == 1))
    {
        cout << m;
    }
    return 0;
}

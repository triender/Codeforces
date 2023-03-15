#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, sum;
    cin >> n;
    if (n >= 100)
    {
        sum = n / 100;
        n %= 100;
    }
    if (n >= 20)
    {
        sum += n / 20;
        n = n - (n/20)*20;
    }
    if ((n >= 10))
    {
        sum += 1;
        n -= 10;
    }
    if (n >= 5)
    {
        sum += 1;
        n -= 5;
    }
    sum += n;
    cout << sum;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int value_of_coin[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> value_of_coin[i];
        sum += value_of_coin[i];
    }
    sort(value_of_coin, value_of_coin + n);

    int sum1, count;
    sum /= 2;
    for (int i = n - 1; i >= 0; i--)
    {
        sum1 += value_of_coin[i];
        count += 1;
        if (sum1 > sum)
        {
            break;
        }
    }

    cout << count;
    return 0;
}
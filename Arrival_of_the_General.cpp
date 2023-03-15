#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int Max = A[0], Min = A[n - 1], Max_p = 0, Min_p = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (Max < A[i])
        {
            Max = A[i];
            Max_p = i;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (Min > A[i])
        {
            Min = A[i];
            Min_p = i;
        }
    }
    if ((Max_p == 0)and(Min_p == n-1))
    {
        cout << 0;
    }
    else if (Max_p > Min_p)
    {
        cout << Max_p + n - Min_p - 2;
    }
    else
    {
        cout << Max_p + n - Min_p - 1;
    }

    return 0;
}
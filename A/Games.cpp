#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int A[t], B[t];
    for (int i = 0; i < t; i++)
    {
        cin >> A[i];
        cin >> B[i];
    }
    int check = 0;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if (A[i] == B[j])
            {
                check += 1;
            }
        }
    }
    cout << check;
    return 0;
}
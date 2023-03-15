#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string A;
    cin >> A;
    int B[n];
    for (int i = 0; i < n; i++)
    {
        B[i] = int(tolower(A[i]));
    }
    sort(B, B + n);
    
    int count = 1, check = B[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (check < B[i+1])
        {
            check = B[i+1];
            count += 1;
        }
    }
    
    if (count == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}

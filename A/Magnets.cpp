#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n];
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        if (A[i] != A[i+1])
        {
            count += 1;
        }
    }
    
    cout << count;
    return 0;
}
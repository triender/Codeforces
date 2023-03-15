#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    n++;
    int A[n];
    int B[n];
    for (int i = 1; i < n; i++)
    {
        int temp;
        cin >> A[i];
        temp = A[i];
        B[temp] = i; 
    }

    for (int i = 1; i < n; i++)
    {
        cout << B[i] << " ";
    }
    
    return 0;
}    
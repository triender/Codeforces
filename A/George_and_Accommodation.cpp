#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    int A[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i][0] >> A[i][1];
    }

    for (int i = 0; i < n; i++)
    {
        if (((A[i][0]) + 2 )<= A[i][1])
        {
            count += 1;
        }  
    }
    
    cout << count;
    return 0;
}

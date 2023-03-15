#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    unsigned long long int A[t];
    for (int i = 0; i < t; i++)
    {

        cin >> A[i];
    }

    for (int i = 0; i < t; i++)
    {
        if (A[i] == 0)
        {
            cout << "NO" << endl;
        }
        else if ((A[i] %4) != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            int even = 2;
            int odd = 1;
            unsigned long long int B[A[i]];
            for (int l = 0; l < A[i]; l++)
            {
                if (l < (A[i]/2))
                {
                    B[l] = even;
                    even += 2;
                } else if ((l>=(A[i]/2))and(l!=(A[i]-1))){
                    B[l] = odd;
                    odd += 2;
                } else {
                    B[l] = ((A[i]/2)*((A[i]/2)+1) - pow(((A[i]/2)-1), 2));
                }
            }
            for (int n = 0; n < A[i]; n++)
            {
                cout << B[n] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

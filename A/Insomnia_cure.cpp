#include <iostream>
using namespace std;
const int MAX = 100;

void check(bool A[MAX], int d, int n)
{
    int i = n;
    for (i; i <= d; i += n)
    {
        A[i] = false;
    }
    
}

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    if ((k == 1) or (l == 1) or (m == 1) or (n == 1))
    {
        cout << d;
    }
    else
    {
        int length = d;
        bool A[length];
        for (int i = 1; i <= d; i++)
        {
            A[i] = true;
        }

        check(A, d, k);
        check(A, d, l);
        check(A, d, m);
        check(A, d, n);

        int count = 0;
        for (int i = 1; i <= d; i++)
        {
            if (A[i])
            {
                count += 1;
            }
        }
        cout << d-count;
    }
    return 0;
}

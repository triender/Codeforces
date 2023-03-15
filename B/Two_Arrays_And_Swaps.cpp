#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int Ans_list[t];

    for (int h = 0; h < t; h++)
    {
        int n, k;
        cin >> n;
        int A[n], B[n];
        cin >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
        }
        sort(A, A + n);
        sort(B, B + n);

        if (k != 0)
        {
            for (int j = 0; j < k; j++)
            {
                if (A[0] < B[n - 1])
                {
                    swap(A[0], B[n - 1]);
                }
                sort(A, A + n);
                sort(B, B + n);
            }
        }

        int Sum_array = 0;
        for (int i = 0; i < n; i++)
        {
            Sum_array += A[i];
        }

        Ans_list[h] = Sum_array;
    }

    for (int i = 0; i < t; i++)
    {
        cout << Ans_list[i] << endl;
    }

    return 0;
}

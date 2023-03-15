#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int Ans_list[t];

    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;
        int A[n];
        int Even_count = 0, Odd_count = 0;
        bool checked = true;
        int Error = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            if ((i % 2) != (A[i] % 2))
            {
                checked = false;
                Error += 1;
            }
        }

        if (checked)
        {
            Ans_list[k] = 0;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if ((A[i] % 2) == 0)
                {
                    Even_count += 1;
                }
                else
                {
                    Odd_count += 1;
                }
            }
            
            if ((n % 2) == 0)
            {
                if ((Odd_count - Even_count) == 0)
                {
                    Ans_list[k] = Error / 2;
                }
                else
                {
                    Ans_list[k] = -1;
                }
            }
            else
            {
                if ((Even_count - Odd_count) == 1)
                {
                    Ans_list[k] =  Error / 2;
                }
                else
                {
                    Ans_list[k] = -1;
                }
            }
        }
    }

    for (int i = 0; i < t; i++)
    {
        cout << Ans_list[i] << endl;
    }
    
    return 0;
}

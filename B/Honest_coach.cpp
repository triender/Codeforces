#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string Ans_list[t];
    for (int j = 0; j < t; j++)
    {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += A[i];
        }
    
        if (((sum % 2 == 0)and(sum/n != 2)and(n%2 == 1)) or ((sum % 2 == 0)and(n%2 == 0)))
        {
            Ans_list[j] = "YES";
        }
        else
        {
            Ans_list[j] = "NO";
        }
    }

    for (int i = 0; i < t; i++)
    {
        cout << Ans_list[i] << endl;
    }
    return 0;
}

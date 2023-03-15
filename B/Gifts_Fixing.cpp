#include <bits/stdc++.h>
using namespace std;

long long int SumArray(long long int A[100], long long int n)
{
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }
    return sum;
}

void Array_creat(long long int A[100], long long int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}

void find_Min_Max_in_array(long long int A[100], long long int &max, long long int &min, long long int n)
{
    max = A[0];
    min = A[0];
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
        if (min > A[i])
        {
            min = A[i];
        }
    }
}
long long int Max(long long int a, long long int b){
    if (a>b) return a;
    return b;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int n;
        cin >> n;
        long long int Max_c, Min_c, Max_o, Min_o;
        long long int Candy[n], Orange[n];

        Array_creat(Candy, n);
        find_Min_Max_in_array(Candy, Max_c, Min_c, n);
        Array_creat(Orange, n);
        find_Min_Max_in_array(Orange, Max_o, Min_o, n);

        if ((Min_c == Max_c) and (Min_o == Max_o))
        {
            cout << 0;
        }
        else if (Min_c == Max_c)
        {
            cout << (SumArray(Orange, n) - Min_o * n);
        }
        else if (Min_o == Max_o)
        {
            cout << (SumArray(Candy, n) - Min_c * n);
        }
        else
        {
            long long int count_c = 0, count_o = 0, count = 0;
            for (int i = 0; i < n; i++)
            {
                if (Candy[i] != Min_c)
                {
                    count_c = Candy[i] - Min_c;
                }
                if (Orange[i] != Min_o)
                {
                    count_o = Orange[i] - Min_o;
                }
                count += Max(count_c, count_o);
                count_c = 0;
                count_o = 0;
            }
            cout << count;
        }
        cout << endl;
    }

    return 0;
}

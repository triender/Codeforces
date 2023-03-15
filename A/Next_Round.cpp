#include <iostream>

using namespace std;

int main()
{
    int n, k, counter, counter1,counter2;
    cin >> n >> k;
    int Input[n];
    counter = k;
    counter1 = k-1;
    counter2 = k;
    for (int i = 0; i < n; i++)
    {
        cin >> Input[i];
    }

    if (Input[k-1] == 0)
    {
        int i = k-1;
        while (Input[i] == 0)
        {
            counter2 -= 1;
            i--;
        }
         
        cout << counter2;
    }else if ((Input[0]) == 0)
    {
        cout << 0;
    }
    else if (n == k)
    {
        int i = n-1;
        while (Input[i] == 0)
        {
            counter -= 1;
            i--;
        }
        cout << counter;
    }
    else
    {
        for (int i = k - 1; i < n; i++)
        {
            if ((Input[i] != 0) and (Input[i] >= Input[k - 1]))
            {
                counter1 += 1;
            }
        }
        cout << counter1;
    }
    return 0;
}

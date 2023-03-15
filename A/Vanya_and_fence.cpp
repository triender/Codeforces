#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int Heigth;
    cin >> Heigth;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > Heigth)
        {
            count += 2;
        }
        else
        {
            count += 1;
        }
    }
    cout << count;
    return 0;
}

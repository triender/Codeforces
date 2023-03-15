#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int Bit = 0;
    int n; cin >> n;
    string Operator[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Operator[i];
    }
    
    for (int i = 0; i < n; i++)    
    {
        if (Operator[i][1] == '-')
        {
            --Bit;
        } else 
        {
            ++Bit;
        }
    }
    cout << Bit;
    return 0;
}
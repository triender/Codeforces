#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long int Banana_Initial_Cost, Money_Soldier_Had, Banana_Soldier_Wants, Banana_Cost;
    cin >> Banana_Initial_Cost >> Money_Soldier_Had >> Banana_Soldier_Wants; 
    for (int i = 1; i <= Banana_Soldier_Wants; i++)
    {
        Banana_Cost = i*Banana_Initial_Cost;
        Money_Soldier_Had -= Banana_Cost;
    }
    if (Money_Soldier_Had < 0)
    {
        Money_Soldier_Had = abs(Money_Soldier_Had);
        cout << Money_Soldier_Had;
    } else {
        cout << 0;
    }
    
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int Limak_weight, Bob_weight;
    cin >> Limak_weight >> Bob_weight;
    int Year = 0;
    do
    {
        Limak_weight *= 3;
        Bob_weight *= 2;
        Year += 1;
    } while (Limak_weight <= Bob_weight);
    
    cout << Year;
    return 0;
}

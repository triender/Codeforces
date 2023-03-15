#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;


int main()
{
    string Input;
    cin >> Input;
    bool run = true;
    int k = 0;
    int Number[Input.length()/2+1];
    for (int i = 0; i <= Input.length(); i += 2)
    {
        Number[k] = int(Input[i])-48;
        k++;
    }
    sort(Number, Number + k);
    int i;
    for (int i = 0; i < k; i++)
    {
        if ((i >= 1)and(i < Input.length()-1))
        {
            cout << "+";
        }
        cout << Number[i];
    }
    return 0;
}

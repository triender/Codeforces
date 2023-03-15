#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    string Name;
    cin >> Name;
    int counter = 0;
    int i;
    int Number[Name.length()];
    for (int i = 0; i < Name.length(); i++)
    {
        Number[i] = int(Name[i]);
    }

    sort(Number, Number + Name.length());
    counter = sizeof(Number) / sizeof(int);

    /* for (int i = 0; i < counter; i++)
    {
        cout << Number[i] << "\t";
    }
    cout << endl; */

    int counter1 = 0;
    for (int i = 0; i < counter-1; i++)
    {
        if (Number[i] == Number[i+1])
        {
            counter1 += 1;
        }
    }
    
    counter = counter - counter1;
    if ((counter%2)==0){
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
    return 0;
}

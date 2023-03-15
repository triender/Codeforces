#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string Name;
    cin >> Name;
    cout << char(toupper(Name[0]));
    for (int i = 1; i < Name.length(); i++)
    {
        cout << char(Name[i]);
    }
    return 0;
}

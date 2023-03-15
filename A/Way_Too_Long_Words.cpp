#include <iostream>
#include <string.h>

using namespace std;

int main()
{   
    int i, n, Len, Len1, Len2;
    cin >> n;
    string Input[n];
    string First_letter, Middle_letter, Last_Letter;
    for (int i = 0; i < n; i++)
    {
        cin >> Input[i];
    }

    for (int i = 0; i < n ; i++)
    {
        Len = Input[i].length();
        if (Len > 10)
        {   
            Len1 = int(Input[i].length()) -1;
            Len2 = int(Input[i].length()) -2;
            cout << Input[i][0] << (Len2) << Input[i][Len1] << endl;
        }
        else {cout << Input[i] << endl;}
    }
    return 0;
}

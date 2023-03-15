#include <bits/stdc++.h>
using namespace std;

int main()
{
    string Input;
    cin >> Input;
    int length = Input.length();
    int B[length];
    int a = 97, e = 101, i = 105, o = 111, u = 117, y = 121;
    for (int j = 0; j < length; j++)
    {
        B[j] = int(tolower(Input[j]));
    }
    
    int Output[100];
    int count = 0;
    for (int j = 0; j < length; j++)
    {
        if (B[j] != a && B[j] != e && B[j] != i && B[j] != o && B[j] != u && B[j] != y)
        {
            Output[count] = B[j];
            count++;
        }
    }
    
    for (int j = 0; j < count; j++)
    {
        cout << "." << char(Output[j]);
    }
    
    return 0;
}
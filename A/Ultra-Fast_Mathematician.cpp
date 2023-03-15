#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string First_num, Second_num;
    cin >> First_num >> Second_num;
    int length = First_num.length();
    int ans[length], Int_First[length], Int_Second[length];

    for (int i = 0; i < length; i++)
    {
        Int_First[i] = int(First_num[i]) - 48;
        Int_Second[i] = int(Second_num[i]) - 48;
    }

    for (int i = 0; i < length; i++)
    {
        if (Int_First[i] != (Int_Second[i]))
        {
            ans[i] = 1;
        }else
        
        {
            ans[i] = 0;
        }
    }
    for (int i = 0; i < length; i++)
    {
        cout << ans[i];
    }
    
    return 0;
}

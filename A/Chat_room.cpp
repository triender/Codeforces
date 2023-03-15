#include <bits/stdc++.h>
using namespace std;

int main()
{
    string hello;
    cin >> hello;
    int length = hello.length();
    string Check = {'h', 'e', 'l', 'l', 'o'};
    bool check = false;
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (hello[i] == Check[count])
        {
            count += 1;
        }
        if (count == 5)
        {
            check = true;
        }
    }
    if (check)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
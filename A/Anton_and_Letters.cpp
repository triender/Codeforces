#include <bits/stdc++.h>
using namespace std;
int main()
{
    string Input;
    set<char> a;
    getline(cin, Input);
    for (int i = 0; i < Input.length(); i++)
    {
        if (Input[i] >= 'a' and Input[i] <= 'z')
            a.insert(Input[i]);
    }
    cout << a.size() << endl;
    return 0;
}
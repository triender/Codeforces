#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int lenght;
        cin >> lenght;
        string s;
        cin >> s;
        int s_int[lenght];
        for (int j = 0; j < lenght; j++)
        {
            s_int[j] = int(s[j]);
        }
        for (int j = 0; j < lenght; j++)
        {
            cout << s_int[j] << "   ";
        }
        cout << endl;
        sort(s_int, s_int + lenght);
         for (int j = 0; j < lenght; j++)
        {
            cout << s_int[j] << "   ";
        }
        cout << endl;
        int count = 2;
        for (int j = 1; j < lenght; j++)
        {
            if (s_int[j] == s_int[j-1])
            {
                count += 1;
            }else{
                count += 2;
            }
        }
        cout << count << endl;
    }
    
    return 0;
}

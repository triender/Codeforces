#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int Y = 89, E = 69, S = 83;
    int y_check, e_check, s_check;
    for (int i = 0; i < t; i++)
    {
        string Yes;
        cin >> Yes;
        y_check = toupper(Yes[0]);
        e_check = toupper(Yes[1]);
        s_check = toupper(Yes[2]);
        if((y_check == Y)and(e_check == E)and(s_check == S)){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}

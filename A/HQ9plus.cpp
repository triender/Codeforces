#include <bits/stdc++.h>
using namespace std;

int main(){
    string Input;
    getline(cin, Input);
    int length = Input.length();
    bool check = true;
    int H = 72, nine = 57, Q = 81;
    for (int i = 0; i < length; i++)
    {
        if (int(Input[i]) == H || int(Input[i]) == nine || int(Input[i] == Q))
        {
            cout << "YES";
            check = false;
            break;
        }
    }
    if (check)
    {
        cout << "NO";
    }
    
}
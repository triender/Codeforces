#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin >> n;
    int length = n.length();
    int count_0 = 0, count_1 = 0;
    bool check = true;
    for (int i = 0; i < length; i++)
    {
        if (n[i]=='1')
        {
            count_1 += 1;
            count_0 = 0;
        }else{
            count_0 += 1;
            count_1 = 0;
        }
        if (count_0 >= 7 || count_1 >= 7)
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
    
    return 0;
}
    
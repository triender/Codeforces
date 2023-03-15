#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, time_left, count = 0;
    cin >> n >> k;
    time_left = 240 - k;
    for (int i = 1; i <= n; i++)
    {
        if (time_left - i*5 < 0)
        {
            break;
        }
        count += 1;
        time_left -= i*5;
    }
    cout << count;
    return 0;
}

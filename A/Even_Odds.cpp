#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n, k;
    cin >> n >> k;
    long long int Even_count = 0;

    if (n%2 == 0)
    {
        Even_count = n/2;
    }else{
        Even_count = n/2 + 1;
    }
    if (k <= Even_count)
    {
        cout << k*2 - 1;
    }else{
        cout << (k-(Even_count))*2;
    }
    
    
    return 0;
}
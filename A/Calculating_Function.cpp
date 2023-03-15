#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long ans;
    
    if ((n%2)==0)
    {
        ans = n/2;
    }else{
        ans = -(n/2 +1);
    }
    
    cout << ans;
    return 0;
}

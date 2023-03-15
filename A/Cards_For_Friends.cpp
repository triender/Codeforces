#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int w, h;
        long int n, number_of_sheets = 1;
        cin >> w >> h >> n;
        if (n == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            while ((w % 2 != 1) or (h % 2 != 1))
            {
                if ((w % 2 == 0) and (w >= 0))
                {
                    w /= 2;
                    number_of_sheets *= 2;
                }
                else
                {
                    h /= 2;
                    number_of_sheets *= 2;
                }
            }
            if(number_of_sheets >= n){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    }

    return 0;
}
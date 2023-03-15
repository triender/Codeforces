#include <bits/stdc++.h>
using namespace std;
int main()
{
    string Input;
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        cin >> Input;
        int len = Input.length();
        int check_upper = 0, check = 1;
        if ((len == 1) && ((Input[0] == 'Y') || (Input[0] == 'e') || (Input[0] == 's')))
        {
            cout << "YES";
        }
        else
        {
            for (int i = 0; i < len; i++)
            {
                if (isupper(Input[i]))
                {
                    check_upper += 1;
                }
            }
            if (check_upper == len)
            {
                cout << "NO";
            }
            else
            {
                if (Input[0] == 'Y')
                {
                    for (int i = 1; i < len; i++)
                    {
                        int a = i;
                        a %= 3;
                        if ((a == 0)&&(Input[i] == 'Y'))
                        {
                            check++;
                        }
                        if ((a == 1)&&(Input[i] == 'e'))
                        {
                            check++;
                        }
                        if ((a == 2)&&(Input[i] == 's'))
                        {
                            check++;
                        }
                    }
                    if (check == len)
                    {
                        cout << "YES";
                    }else{
                        cout << "NO";
                    }
                    
                }
                else if (Input[0] == 'e')
                {
                    for (int i = 1; i < len; i++)
                    {
                        int a = i;
                        a %= 3;
                        if ((a == 0)&&(Input[i] == 'e'))
                        {
                            check++;
                        }
                        if ((a == 1)&&(Input[i] == 's'))
                        {
                            check++;
                        }
                        if ((a == 2)&&(Input[i] == 'Y'))
                        {
                            check++;
                        }
                    }
                    if (check == len)
                    {
                        cout << "YES";
                    }else{
                        cout << "NO";
                    }
                }
                else if (Input[0] == 's')
                {
                    for (int i = 1; i < len; i++)
                    {
                        int a = i;
                        a %= 3;
                        if ((a == 0)&&(Input[i] == 's'))
                        {
                            check++;
                        }
                        if ((a == 1)&&(Input[i] == 'Y'))
                        {
                            check++;
                        }
                        if ((a == 2)&&(Input[i] == 'e'))
                        {
                            check++;
                        }
                    }
                    if (check == len)
                    {
                        cout << "YES";
                    }else{
                        cout << "NO";
                    }
                }
                else{
                    cout << "NO";
                }
            }
        }
        cout << endl;
    }

    return 0;
}

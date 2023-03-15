#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    int Q = 81;
    int A = 65;
    for (int l = 0; l < k; l++)
    {
        int n;
        cin >> n;
        string Question_list_text;
        cin >> Question_list_text;
        int Question_lists[n];

        for (int i = 0; i < n; i++)
        {
            Question_lists[i] = int(Question_list_text[i]);
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (Question_lists[i] == Q)
            {
                count -= 1;
            }
            else
            {
                count += 1;
                if (count > 0)
                {
                    count = 0;
                }
            }
        }
        if ((count >= 0) and (Question_lists[n - 1] != Q))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n];
    bool Easy_check = true;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i])
        {
            cout << "HARD";
            Easy_check = false;
            break;
        }        
    }
    
    if (Easy_check)
    {
        cout << "EASY";
    }
    

    return 0;
}
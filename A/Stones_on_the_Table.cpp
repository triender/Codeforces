#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string Stone;
    cin >> Stone;
    int Stone1 = 0;
    int Stone2 = 0;
    int Remove_Stone = 0;

    for (int i = 0; i < n-1; i++)
    {
        Stone1 = int(Stone[i]);
        Stone2 = int(Stone[i+1]);
        if (Stone1 == Stone2)
        {
            Remove_Stone += 1;
        } 
    }
    cout << Remove_Stone;
    return 0;
}

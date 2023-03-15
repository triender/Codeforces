#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string Bozre_code;
    cin >> Bozre_code;
    int i = 0;
    int length = Bozre_code.length();
    int Dot = 46;
    int Hyphen = 45;
    while (i < length)
    {
        if (int(Bozre_code[i]) == Dot)
        {
            cout << 0;
        }
        else if ((int(Bozre_code[i]) == Hyphen) and (int(Bozre_code[i + 1]) == Dot))
        {
            cout << 1;
            i++;
        }
        else
        {
            cout << 2;
            i++;
        }
        i++;
    }
    return 0;
}

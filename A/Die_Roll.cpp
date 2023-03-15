#include <iostream>
using namespace std;

int main()
{
    int Yakko_rolled, Wakko_rolled;
    cin >> Yakko_rolled >> Wakko_rolled;

    int max = 0;
    (Yakko_rolled > Wakko_rolled) ? max = Yakko_rolled : max = Wakko_rolled;
    int chances;
    chances = 7 - max;

    switch (chances)
    {
    case 1:
        cout << "1/6";
        break;
    case 2:
        cout << "1/3";
        break;
    case 3:
        cout << "1/2";
        break;
    case 4:
        cout << "2/3";
        break;
    case 5:
        cout << "5/6";
        break;
    case 6:
        cout << "1/1";
    }

    return 0;
}

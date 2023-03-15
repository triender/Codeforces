#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

bool is_distinct(int n){
    int string_input[4];
    for (int i = 0; i < 4; i++)
    {
        string_input[i] = n%10;
        n /= 10;
    }
    
    sort(string_input, string_input + 4);

    for (int i = 0; i < 3; i++)
    {
        if(string_input[i] == string_input[i+1]){
            return false;
        }
    }
    return true;
}

int main()
{
    int Year;
    cin >> Year;
    for (int i = Year + 1; i <= 9012; i++)
    {
        if ((i > Year)and(is_distinct(i)))
        {
            cout << i;
            break;
        }
    }
    return 0;
}

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
    string word;
    int lower = 0, upper = 0;
    cin >> word;
    for (int i = 0; i < word.length(); i++)
    {
        if (islower(word[i])){
            lower +=1;
        }else{
            upper +=1;
        }
    }
    
    if (upper > lower)
    {
        for (int i = 0; i < word.length(); i++)
        {
            cout << char(toupper(word[i]));
        }
    } else {
        for (int i = 0; i < word.length(); i++)
        {
            cout << char(tolower(word[i]));
        }
    }
    
    return 0;
}

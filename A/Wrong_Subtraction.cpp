#include <iostream>
#include <string>
using namespace std;

int main()
{
    string String_Input;
    cin >> String_Input;
    int len = String_Input.length();
    long int Input_Array[len];
    for (int i = 0; i < len; i++)
    {
        Input_Array[i] = int(String_Input[i]) - 48;
    }

    int times;
    cin >> times;
    for (int i = 0; i < times; i++)
    {
        if ((Input_Array[len - 1]) != 0)
        {
            Input_Array[len - 1] -= 1;
        }
        else
        {
            len -= 1;
        }
    }

    for (int i = 0; i < len; i++)
    {
        cout << Input_Array[i];
    }

    return 0;
}

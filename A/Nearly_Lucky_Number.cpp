#include <iostream>
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

    int lucky_counter = 0;
    for (int i = 0; i < len; i++)
    {
        if ((Input_Array[i] == 4)or(Input_Array[i] == 7))
        {
            lucky_counter += 1;
        } 
    }

    string lucky_string = to_string(lucky_counter);
    int len2 = lucky_string.length();
    int Nearly_Lucky_Number = 0;
    for (int i = 0; i < len2; i++)
    {
        if ((int((lucky_string[i])-48) == 7)or(int((lucky_string[i])-48) == 4))
        {
            Nearly_Lucky_Number += 1;
        }
    }
    
    if (Nearly_Lucky_Number == len2)
    {
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
}

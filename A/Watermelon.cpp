#include <iostream>

using namespace std;

int main()
{
    int a;
    bool Checked;
    cin >> a;

    if (a<=3)
    {
        Checked = false;
    } else if(a%2 == 1)
    {
        Checked = false;
    } else
    {
        Checked = true;
    }
    

    if (Checked){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}

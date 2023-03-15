#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b, c;
    int Number_Of_Problem_Can_Solved = 0;
    for (int i = 0; i < n; i++){
            cin >> a >> b >> c;
            if (a+b+c >= 2){
                Number_Of_Problem_Can_Solved +=1;
            }
    }
    cout << Number_Of_Problem_Can_Solved;
    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;
    int count = 0;
    
    for (int i = 0; i < A.length(); i++)
    {
        if(int(A[i]) == int(B[B.length()-i-1])){
            count += 1;
        }
    }

    if (count == A.length())
    {
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}

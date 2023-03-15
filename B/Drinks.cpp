#include <iostream>
using namespace std;

const int MAX = 100;
void Nhap(int a[MAX], int &n){
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    } 
}

int main()
{
    int A[MAX], na;
    Nhap(A, na);
    double B[na];
    for (int i = 0; i < na; i++)
    {
        B[i] = double(A[i])/100;
    }
    
    double sum = 0;
    for (int i = 0; i < na; i++)
    {
        sum += B[i];
    }
    
    cout << (sum/na)*100;

    return 0;
}

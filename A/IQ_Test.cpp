#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    
    int even_p, odd_p, odd_coutnt, even_count;
    for (int i = 0; i < n; i++)
    {
        if(A[i]%2==1){
            odd_coutnt += 1;
            odd_p = i + 1;
        }else{
            even_count += 1;
            even_p = i + 1;
        }
    }
    
    if(even_count > odd_coutnt){
        cout << odd_p;
    }else{
        cout << even_p;
    }
    

    return 0;
}
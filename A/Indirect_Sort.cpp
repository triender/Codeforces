#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int unsort_array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> unsort_array[i];
        }
        
        int Min = unsort_array[0];
        for (int i = 0; i < n; i++)
        {
            if (Min > unsort_array[i])
            {
                Min = unsort_array[i];
            }
        }
        
        // if array[0] = Min then array can sorted
        // without the first element, we can use swap 2 elements to sort array like normal
        if (unsort_array[0] == Min)
        {
            cout << "Yes";
        }else{
            cout << "No";
        }
        cout << endl;
    }
    return 0;
}

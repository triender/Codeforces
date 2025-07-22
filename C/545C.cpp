#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    
    // cout << "Enter number of trees: " << endl;
    cin >> n;
    vector<pair<int, int>> arr(n);

    for(int i = 0; i < n; ++i) {
        cin >> arr[i].first >> arr[i].second;
    }

    int tree_cut_down = 2, max_occupied_left = 0, max_occupied_right = 0;
    bool occupied = false;
    for (int i = 1; i < n - 1; i++)
    {
        max_occupied_right = arr[i + 1].first - arr[i].first - 1;
        if(occupied){
            occupied = false;
        }
        else
            max_occupied_left = arr[i].first - arr[i - 1].first - 1;
        
        if(arr[i].second <= max_occupied_left){
            tree_cut_down++;
        } else if (arr[i].second <= max_occupied_right){
            tree_cut_down++;
            max_occupied_left -= arr[i].second;
            occupied = true; 
        }
    }

    if(n > 1)
        cout << tree_cut_down << endl;    
    else 
        cout << 1 << endl;
    return 0;
}


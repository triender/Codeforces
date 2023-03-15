#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n_group;
    cin >> n_group;
    long int friend_in_group[n_group];
    for (int i = 0; i < n_group; i++)
    {
        cin >> friend_in_group[i];
    }
    sort(friend_in_group, friend_in_group + n_group);

    long int One = 0, Two = 0, Three = 0, Four = 0;
    for (long int i = 0; i < n_group; i++)
    {
        if (friend_in_group[i] == 1)
        {
            One += 1;
        }
        else if (friend_in_group[i] == 2)
        {
            Two += 1;
        }
        else if (friend_in_group[i] == 3)
        {
            Three += 1;
        }
        else
        {
            Four += 1;
        }
    }


    long int answer = 0;
    answer = Four;
    answer += Three;
    answer += Two / 2;
    One = One - Three;

    if (Two % 2 == 1)
    {
        answer += 1;
        One -= 2;
    }
    if (One < 0)
    {
        One = 0;
    }
    
    if (One%4 != 0)
    {
        answer += One/4 + 1;
    }else{
        answer += One/4;
    }
    
    cout << answer;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int numberOfCards;
    cin >> numberOfCards;
    int cards[numberOfCards] = {};
    for (int i = 0; i < numberOfCards; i++)
        cin >> cards[i];
    
    int left = 0, right = numberOfCards - 1;
    int sereja = 0, dima = 0;
    bool serejaTurn = true;

    while (left <= right)
    {
        int chosen;
        switch (cards[left] > cards[right])
        {
            case true:
                chosen = cards[left];
                left++;
                break;
            case false:
                chosen = cards[right];
                right--;
                break;
        }

        if (serejaTurn)
        {
            sereja += chosen;
        }
        else
        {
            dima += chosen;
        }
        serejaTurn = !serejaTurn;
    }

    cout << sereja << " " << dima;

    
    return 0;
}

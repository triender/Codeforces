#include <iostream>
using namespace std;

int main()
{
    int Number_of_game;
    cin >> Number_of_game;
    string game_results;
    cin >> game_results;
    int game_for_Anton = 0, game_for_Danik = 0;
    for (int i = 0; i < Number_of_game; i++)
    {
        if (int(game_results[i]) == 68)
        {
            game_for_Danik += 1;
        }else{
            game_for_Anton += 1;
        }   
    }
    
    if (game_for_Anton == game_for_Danik)
    {
        cout << "Friendship";
    } else if(game_for_Anton > game_for_Danik){
        cout << "Anton";
    } else{
        cout << "Danik";
    }
    

    return 0;
}

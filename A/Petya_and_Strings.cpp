#include <bits/stdc++.h>
#include <string.h>
#include <cctype>
using namespace std;

int main(){
	string First, First_checked, Second, Second_checked;
    cin >> First;
    cin >> Second;
    int Check1, Check2, Counter_E;
    bool run = true;
    int i = 0;
    while (run){   
        Check1= int(First[i]);
        if (Check1 < 96)
        {
            Check1 += 32;
        }
        Check2 = int(Second[i]);
        if (Check2 < 96)
        {
            Check2 += 32;
        }
        if (Check1 > Check2){
            cout << "1";
            break;
        } else if (Check1 < Check2){
            cout << "-1";
            break;
        } else {
            Counter_E += 1;
        }
        if (Counter_E == First.length())
        {
            cout << "0";
            break;
        }
        i++;
    }
	return 0;
}
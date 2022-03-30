// GameMonopoly.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;






//#2
int decidePlayers() {
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;

    cout << "*********************" << endl;
    cout << "*********************" << endl;
    cout << "   How Many Players? " << endl;
    cout << "   ------------      " << endl;
    cout << "      Up To 4        " << endl;
    cout << "*********************" << endl;
    cout << "*********************" << endl;

    string name1, name2, name3, name4, gameName;
    char in;
    bool done = false;
    while(!done){
        cin >> in;
        if (in == '1') {
            cout << "What name would you like to save you game as?" << endl;
            cin >> gameName;
            cout << "What's your name?" << endl;
            cin >> name1;

        }
        else if (in == '2') {

        }
        else if (in == '3') {

        }
        else if (in == '4') {

        }
        else {
            cout << "Please enter a valid input" << endl;
        }
    }
    return 0;
}




//Starts here #1
int main()
{
    cout << "*********************" << endl;
    cout << "*********************" << endl;
    cout << "   MONOPOLY          " << endl;
    cout << "   ------------      " << endl;
    cout << "    Start  (S)       " << endl;
    cout << "    Load   (L)       " << endl;
    cout << "    Quit   (Q)       " << endl;

    bool done = false;
    char in;

    while(!done){
        cin >> in;

        if (in == 'S' || in == 's') {
            cout << "Starting Game!!! " << endl;
            decidePlayers();
        }
        else if (in == 'L' || in == 'l') {
            cout << "Loading games..." << endl;
            //loadGames();
        }
        else if (in == 'q' || in == 'Q') {
            cout << "Goodbye!";
            return 0;
        }
        else {
            cout << "Enter a valid input please" << endl;
        }
    }
}




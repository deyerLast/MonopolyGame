// GameMonopoly.cpp : This file contains the 'main' function. Program execution begins and ends here.

// Libraries, Source files, etc.
using namespace std;
#include "Player.h"
#include <iostream>




//#2
void decidePlayers() {
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
    while (!done) {
        cin >> in;
        if (in == '1') {
            cout << "What name would you like to save you game as?" << endl;
            cin >> gameName;
            cout << "What's your name?" << endl;
            cin >> name1;
            Player a = Player(15000, name1);

            //Call Send to board with all this information
        }
        else if (in == '2') {
            cout << "What name would you like to save you game as?" << endl;
            cin >> gameName;
            cout << "Player 1, what is your name?" << endl;
            cin >> name1;
            Player a = Player(15000, name1);
            cout << "Player 2, what is your name?" << endl;
            cin >> name2;
            Player b = Player(15000, name2);

            //Call Send to board with all this information
        }
        else if (in == '3') {
            cout << "What name would you like to save you game as?" << endl;
            cin >> gameName;
            cout << "Player 1, what is your name?" << endl;
            cin >> name1;
            Player a = Player(15000, name1);
            cout << "Player 2, what is your name?" << endl;
            cin >> name2;
            Player b = Player(15000, name2);
            cout << "Player 3, what is your name?" << endl;
            cin >> name3;
            Player c = Player(15000, name3);
            //Call Send to board with all this information
        }
        else if (in == '4') {
            cout << "What name would you like to save you game as?" << endl;
            cin >> gameName;
            cout << "Player 1, what is your name?" << endl;
            cin >> name1;
            Player a = Player(15000, name1);
            cout << "Player 2, what is your name?" << endl;
            cin >> name2;
            Player b = Player(15000, name2);
            cout << "Player 3, what is your name?" << endl;
            cin >> name3;
            Player c = Player(15000, name3);
            cout << "Player 4, what is your name?" << endl;
            cin >> name4;
            Player d = Player(15000, name4);
            //Call Send to board with all this information
        }
        else {
            cout << "Please enter a valid input" << endl;
        }
    }
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

    while (!done) {
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



























/*Needs For THE GAME

		Players
		Spaces (Properties, Taxes, Corners, Utilities, Railroads)
		Community Chess Cards
		Chance Cards

*/
	
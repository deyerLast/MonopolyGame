/* HAVES
		Money
		Properties(Houses)
*/

//#ifndef PLAYER_H
//#define PLAYER_H

using namespace std;
#include <string>


struct Coordinates {
	int x;
	int y;
};


class Player {

private:
	string playerName;
	int moneyAmount;
	int location;
	bool indexOfProperties[40];
	bool alive;
	//Coordinates pixelLocation; // Could use if I want to make graphics for the game.


public:
	//Constructors
	Player();
	Player(int money,string name);

	//SET FUNCTIONS
	void setPlayerName(string inputName);
	void setMoneyAmount(int inputNum);
	void setLocation(int spaceNum);
	void setOwnedProperties(int inputIndex, bool isOwned);

	//GET FUNCTIONS
	string getPlayerName();
	int getMoneyAmount();
	int getLocation();
	bool getOwnedProperty(int inputIndex);
	bool isAlive();
	
	//EVERYTHING ELSE
	void giveMoney(int amount);
	void takeMoney(int amount);
	void movePlayer(int amount);
	void reset();
	//anything else?

};
//#endif // !PLAYER_H
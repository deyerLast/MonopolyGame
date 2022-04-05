#include "Player.h"
using namespace std;

Player::Player() {
	moneyAmount = 2500;
	location = 0;
	for(int i = 0; i < 40; i++){
		indexOfProperties[i] = false;
	}
	alive = true;

	playerName = "David";
}

Player::Player(int money, string name) {								//Creates class using header file and scope(::)
	
	moneyAmount = money;
	location = 0;
	for (int i = 0; i < 40; i++) {
		indexOfProperties[i] = false;
	}
	alive = true;

	playerName = "David";
}



//	SET FUNCTIONS IMPLEMENTED
void Player::setPlayerName(string inputName) {
	playerName = inputName;
}

// GET FUNCTIONS IMPLEMENTED

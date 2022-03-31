#include "Player.h"
#include <string>
#include <iostream>

class Player {
private:
	int Position, Money, size=0;
	string Name;
	string* Properties = new string[size];

public:
	Player(string name, int position, int money) {
		Name = name;
		Position = position;
		Money = money;
		string* Properties = new string[size];
	}

	string getName() {
		return Name;
	}
	void setName(string name) {
		Name = name;
	}

	int getMoney() {
		return Money;
	}
	void setMoney(int money) {
		Money = money;
	}

	int getPosition() {
		return Position;
	}
	void setPosition(int position) {
		if (position > 39) {
			Position = 0;
		}else{ 
			Position = position;
		};
	}

	void setProperties(string* properties) {
		Properties = properties;
	}
	string* getProperties() {
		return Properties;
	}
};

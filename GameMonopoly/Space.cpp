#include "Space.h"
#include "Space.h"
#include <iostream>




class Space {
private:
	string name;
	string actionText;
	string spaceType; //property, card, tax, railroads, jail, etc...
	int propertyCost;
	int freeParking;
	bool occupied;
	bool owned;
	bool mortgaged;
	int houses;
	int rent;
	int tax;


public:
	//functions to set values
	void setName(string inputName) {
		name = inputName;

		houses = 0;
	}

	void setActionText(string inputText) {
		actionText = inputText;
		houses = 0;
	}

	void setType(string inputType) {
		spaceType = inputType;
	}

	void setPropertyCost(int inputCost) {
		propertyCost = inputCost;
	}

	void setFreeParking(int inputMoney) {
		freeParking = inputMoney;
	}

	void setOccupied(int inputOccupied) {
		occupied = inputOccupied;
	}

	void setOwnership(int inputOwnership) {
		owned = inputOwnership;
	}

	void setMortgaged(bool inputMortgage) {
		mortgaged = inputMortgage;
	}

	void setRent(int inputRent) {
		rent = inputRent;
	}

	void setTax(int inputTax) {
		tax = inputTax;
	}

	//functions to get values
	string getName(int nameIndex) {
		return name;
	}

	string getActionText(int textIndex) {
		return actionText;
	}

	int getPropertyCost() {
		return propertyCost;
	}

	int getFreeParking() {
		return freeParking;
	}

	bool getMortgaged() {
		return mortgaged;
	}

	int getRent() {
		return rent;
	}

	int getTax() {
		return tax;
	}

	string getType() {
		return spaceType;
	}

	int getOwnership() {
		return owned;
	}

	int getHouses() {
		return houses;
	}

	void setHouses(int inputHouses) {
		houses = inputHouses;
	}

	bool upgrade() {
		if (houses < 5) {
			rent = rent * 2;
			houses++;
			return true;
		}
		else {
			return false;
		}
	}
};

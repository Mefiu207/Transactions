#include <iostream>
#include "History.hpp"

class Money
{
public:
	
	//Basic constructor
	Money();
	
	//Method changing the amount of mony stored in the card
	void change_card(double amount_card);
	
	//Method changing the amount of money stored in the bills
	void change_bills(double amount_bills);
	
	//Method showing the amount of money stored
	void show_all();

	//Method for showing the amount of money in the card
	void show_card();

	//Method for showing the amount of money in the bills
	void show_bills();

private:
	
	//Amount of money in the card
	double money_card;

	//Amount of money in the bills
	double money_bills;

};

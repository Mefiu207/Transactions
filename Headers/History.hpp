#include <iostream>
#include <vector>
#include "Transaction.hpp"


//This class keeps the history of all the transactions with card and bills
//  and it also keeps track of the transactions raiting in order to show the potenial
// for improvement down the line 
class History
{
public:

	//Metohd showing card transactions history
	void show_card_history();

	//Metohd showing bills transactions history
	void show_bills_history();

	//Method for showing all of the history
	void show_all_history();

private:

	//History of card tranactions
	std::vector<Transaction> Card_transactions;

	//History of bills transactions
	std::vector<Transaction> Bills_transactions;

	//History of all the transactions;
	std::vector<Transaction> All_transactions;

	//Raiting sum
	int score


};
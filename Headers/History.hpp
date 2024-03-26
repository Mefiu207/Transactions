#include <iostream>
#include <vector>
#include "Transaction.hpp"

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

};
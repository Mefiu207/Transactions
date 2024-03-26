#include "..\Headers\History.hpp"


void History::show_all_history()
{
	for (auto &transaction : All_transactions)
	{
		std::cout << transaction;
	}
}

void History::show_bills_history()
{
	for (auto& transaction : Bills_transactions)
	{
		std::cout << transaction;
	}
}

void History::show_card_history()
{
	for (auto& transaction : Card_transactions)
	{
		std::cout << transaction;
	}
}




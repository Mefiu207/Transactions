#include "..\Headers\Money.hpp"

Money::Money() : money_card(0), money_bills(0) {}

void Money::change_card(double amount_card)
{
	money_card += amount_card;
}

void Money::change_bills(double amount_bills)
{
	money_bills += amount_bills;
}

void Money::show_all()
{
	std::cout << "All of the money you own: " << money_bills + money_card << std::endl;
}

void Money::show_card()
{
	std::cout << "All of the money you own in your account: " << money_card << std::endl;
}

void Money::show_bills()
{
	std::cout << "All of the money you own in your wallet: " << money_bills << std::endl;
}
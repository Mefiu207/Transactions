#include "..\Headers\Transaction.hpp"

Transaction::Transaction(bool Type, double Amount, std::string Name, enum Justified Rating, std::string Date) : transaction_type(Type), amount(Amount), name(Name), rating(Rating), date(Date) {}

std::ostream& operator<<(std::ostream& str, Transaction& obj)
{
	str << "Transaction was done with ";
	if (obj.transaction_type == 1) str << "a card. ";
	else str << "bills. ";
	str << "The amount was: " << obj.amount << " The name is: " << obj.name << " and the transaction was ";
	switch (obj.rating)
	{
	case 0:
		str << "not ";

	case 1:
		str << "barely ";

	case 2:
		str << "somewhat ";

	case 3:
		str << "kinda ";

	case 4:
		str << "almost ";

	case 5:
		str << "clearly ";
	default:
		break;
	}

	str << "justified" << std::endl;

	return str;
}
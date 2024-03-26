#include <iostream>

//Enum for rating quality of the transaction
enum Justified
{
	Not,
	Barely,
	Somewhat,
	Kinda,
	Almost,
	Clearly,
};


//class for transaction
class Transaction
{
public:

	//Basic constructor
	Transaction(bool Type, double Amount, std::string Name, enum Justified Rating);

	//Ostrem operator
	friend std::ostream& operator<<(std::ostream& str, Transaction& obj);

private:
		
	//Transaction type ( 1 == card, 0 == bills)
	bool transaction_type;

	//Transaction amount
	double amount;

	//Transaction name
	std::string name;

	//Transaction necesity
	enum Justified rating;

};
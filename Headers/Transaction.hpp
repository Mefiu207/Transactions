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


//Class represents one transaction 
class Transaction
{
public:

	//Basic constructor
	Transaction(bool Type, double Amount, std::string Name, enum Justified Rating, std::string Date);

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

	//Date of the transaction
	std::string date;

};
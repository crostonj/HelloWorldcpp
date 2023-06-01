#pragma once

#include <string>


class Receipt
{
public:
	Receipt();
	~Receipt();

	int getReceiptNumber();
	void setReceiptNumber(int receiptNumber);
	int getId();
	void setId(int id);
	std::string getDescription();
	void setDescription(std::string description);
	double getAmount();
	void setAmount(double amount);
private:
	int receiptNumber;
	int id;
	std::string description;
	double amount;
};
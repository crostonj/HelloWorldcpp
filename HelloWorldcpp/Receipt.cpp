#include "Receipt.h"
#include <string>

Receipt::Receipt()
{
}

Receipt::~Receipt()
{
}

int Receipt::getReceiptNumber()
{
	return receiptNumber;
}

void Receipt::setReceiptNumber(int _receiptNumber)
{
	receiptNumber = _receiptNumber;
}

int Receipt::getId()
{
	return 0;
}

void Receipt::setId(int _id)
{
		id = _id;
}

std::string Receipt::getDescription()
{
	return std::string();
}

void Receipt::setDescription(std::string _description)
{
	description = _description;
}

double Receipt::getAmount()
{
	return amount;
}

void Receipt::setAmount(double _amount)
{
	amount = _amount;
}
#pragma once

#include <vector>

#include "Receipt.h"

class Receipts
{
public:
	Receipts();
	std::vector<Receipt> receipts;
	int nextId;

	void createReceipt(const std::string description, double amount);

	void readReceipt(int id);

	void updateReceipt(int id, const std::string newDescription, double newAmount);

	void deleteReceipt(int id);
};

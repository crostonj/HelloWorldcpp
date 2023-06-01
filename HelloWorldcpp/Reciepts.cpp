#include "Receipts.h"
#include "Receipt.h"

#include <iostream>
#include <vector>


Receipts::Receipts() {
	nextId = 1;
}

/// <summary>
/// 
/// </summary>
/// <param name="description"></param>
/// <param name="amount"></param>
void Receipts::createReceipt(const std::string description, double amount) {
	Receipt receipt;
	receipt.setId(nextId++);
	receipt.setDescription(description);
	receipt.setAmount(amount);

	receipts.push_back(receipt);
}


/// <summary>
/// 
/// </summary>
/// <param name="id"></param>
void Receipts::readReceipt(int id) {
	for (Receipt& receipt : receipts) {
		if (receipt.getId() == id) {
			std::cout << "ID: " << receipt.getId() << std::endl;
			std::cout << "Description: " << receipt.getDescription() << std::endl;
			std::cout << "Amount: " << receipt.getAmount() << std::endl;
			return;
		}
	}
	std::cout << "Receipt not found." << std::endl;
}


/// <summary>
/// 
/// </summary>
/// <param name="id"></param>
/// <param name="newDescription"></param>
/// <param name="newAmount"></param>
void Receipts::updateReceipt(int id, const std::string newDescription, double newAmount) {
	for (Receipt& receipt : receipts) {
		if (receipt.getId() == id) {
			receipt.setDescription(newDescription);
			receipt.setAmount(newAmount);
			std::cout << "Receipt updated successfully." << std::endl;
			return;
		}
	}
	std::cout << "Receipt not found." << std::endl;
}


/// <summary>
/// 
/// </summary>
/// <param name="id"></param>
void Receipts::deleteReceipt(int id) {
	for (auto it = receipts.begin(); it != receipts.end(); ++it) {
		if (it->getId() == id) {
			receipts.erase(it);
			std::cout << "Receipt deleted successfully." << std::endl;
			return;
		}
	}
	std::cout << "Receipt not found." << std::endl;
}
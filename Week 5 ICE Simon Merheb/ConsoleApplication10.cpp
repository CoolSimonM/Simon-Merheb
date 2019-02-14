// ConsoleApplication9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "inventory.h"

int main()
{
	InvItem item1(888, "Wrench", 45);

	std::cout << "Inventory\n";
	//std::cout << "ID: " << item1.getID() << std::endl;
	std::cout << "Desccription: " << item1.getDesc() << std::endl;
	std::cout << "Units on Hand: " << item1.getUnits() << std::endl;
	//item1.setUnits(100);
	std::cout << "\nUpdated units, now we have " << item1.getUnits() << " units\n";

	return 0;
}


// ConsoleApplication14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "salsa.h"
#include <iostream>
#include <vector>


int main()
{
	std::vector<Salsa*> salsaList;
	Salsa* salsaCurrent;
	salsaList.reserve(5);
	salsaList.push_back(new Salsa("Mild"));
	salsaList.push_back(new Salsa("Medium"));
	salsaList.push_back(new Salsa("Sweet"));
	salsaList.push_back(new Salsa("Hot"));
	salsaList.push_back(new Salsa("Zesty"));
	int salesTotal = 0;
	int salesBest = INT_MIN;
	int salesWorst = INT_MAX;
	std::string bestSeller = "";
	std::string worstSeller = "";
	int input;


	std::vector<Salsa*>::iterator it = salsaList.begin();

	while (it != salsaList.end()) 
	{
		salsaCurrent = *it;
		input = 0;
		while (true) 
		{
			std::cout << "Enter sales for " << salsaCurrent->salsaName.c_str() << " :";
			std::cin >> input;
			std::endl(std::cout);
			if (input > 0) 
			{
				salsaCurrent->jars = input;
				break;
			}
		}
		it++;
	}

	std::cout << "Updated Sales" << std::endl;
	std::vector<Salsa*>::iterator it2 = salsaList.begin();
	while (it2 != salsaList.end()) 
	{
		salsaCurrent = *it2;
		int salesCurrent = salsaCurrent->jars;
		std::cout << salsaCurrent->salsaName.c_str() << "\t\t\t" << salesCurrent;
		salesTotal += salesCurrent; //add to total

		//if worst, make worst
		if (salesCurrent < salesWorst) 
		{
			salesWorst = salesCurrent;
			worstSeller = salsaCurrent->salsaName;
		}

		//if best make best
		if (salesCurrent > salesBest) 
		{
			salesBest = salesCurrent;
			bestSeller = salsaCurrent->salsaName;
		}
		std::endl(std::cout);
		it2++;
	}
	std::endl(std::cout);
	std::cout << "Total Sales: " << salesTotal << " jars" << std::endl;
	std::endl(std::cout);
	std::cout << "The best selling salsa is " << bestSeller.c_str() << std::endl;
	std::cout << "The worst selling salsa is " << worstSeller.c_str() << std::endl;
}
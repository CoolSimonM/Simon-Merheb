// ConsoleApplication8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Simon Merheb
//Homework 3 Ticket Buyer with Functions
//Sorry

#include "pch.h"
#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>

char theaterSeats[15][30];
int ticketSales = 0;
int ticket17 = 50;
int ticket815 = 40;
int totalSeat = 0;

void totalSale(int sales);
void ticketBuy();
void showAud(bool firstTime = true);
void showRow();


int main()
{

	std::string user;

	showAud();

	while (user != "q")
	{

		std::cout << " Enter: B to purchase tickets" << std::endl;
		std::cout << "\tA to see all seats in auditorium" << std::endl;
		std::cout << "\tR to see seats in a row" << std::endl;
		std::cout << "\tT to display the total ticket sales" << std::endl;
		std::cout << "\tQ to quit" << std::endl;
		std::cin >> user;

		if (user == "B" || user == "b")
		{
			ticketBuy();
		}
		else if (user == "A" || user == "a")
		{
			showAud(false);
			std::cout << "Number of Seats in the Merheb Theater: " << (15 * 30) - totalSeat << std::endl;
		}
		else if (user == "R" || user == "r")
		{
			showRow();
		}
		else if (user == "T" || user == "t")
		{
			totalSale(ticketSales);
		}
		else if (user == "Q" || user == "q")
		{
			std::cout << "Thank you for your time, but mostly your money" << std::endl;
		}
		else
		{
			std::cout << "Please type something valid" << std::endl;
		}
	}
	return 0;
}

void totalSale(int sales)
{

	std::cout << "Total Ticket Sales: $" << sales << std::endl;
}
void ticketBuy()
{
	std::string choice;
	choice = 'y';
	int row = 0;
	int col = 0;
	while (choice == "Y" || choice == "y")
	{

		std::cout << "Tickets in row 1 through 7 cost $50 and from 8 to 15 cost 40$" << std::endl;
		std::cout << "Enter row: ";
		std::cin >> row;
		std::cout << "Enter column: ";
		std::cin >> col;

		if ((row < 1 || row > 15) || (col < 1 || col > 30))
		{
			std::cout << "This seat does not exist. Please try again " << std::endl;
		}
		else if (theaterSeats[row - 1][col - 1] == '#')
		{
			if (row < 8)
			{
				ticketSales = ticketSales + ticket17;
				totalSeat++;
			}
			else if (row > 7)
			{
				ticketSales = ticketSales + ticket815;
				totalSeat++;
			}

			theaterSeats[row - 1][col - 1] = '*';
			std::cout << "Thank you for your purchase. Would you like to purchase another ticket (y/n)?" << std::endl;
			std::cin >> choice;

		}
		else if (theaterSeats[row - 1][col - 1] == '*')
		{
			std::cout << "Sorry, someone is already sitting there. Please find an empty seat" << std::endl;
			choice = 'N';
		}
	}
}
void showAud(bool firstTime)
{

	std::cout << "	123456789012345678901234567890" << std::endl;
	for (int i = 0; i < 15; i++)
	{
		std::cout << "Row" << i + 1 << "\t";
		for (int j = 0; j < 30; j++)
		{
			if (firstTime) {
				theaterSeats[i][j] = '#';
			}
			std::cout << theaterSeats[i][j];

		}

		std::cout << std::endl;
	}
	std::cout << std::endl;
}
void showRow()
{
	int user_row = 0;
	std::cout << "What row do you want to see?" << std::endl;
	std::cin >> user_row;
	if (user_row > 0 && user_row < 16)
	{
		std::cout << "	123456789012345678901234567890" << std::endl;
		std::cout << "Row" << user_row << "\t";
		for (int j = 0; j < 30; j++)
		{
			std::cout << theaterSeats[user_row - 1][j];

		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << "Sorry that row does not exist" << std::endl;
	}
}

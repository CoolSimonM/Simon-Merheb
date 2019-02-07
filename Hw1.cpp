// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Simon Merheb
//Game of Pig
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>

int main()
{
	srand(time(0));
	int player = (rand() % 2) + 1;
	int player1Score = 0;
	int player2Score = 0;
	srand(time(0));
	int cpuRoll = 0; 
	srand(time(0));
	int playRoll = 0;
	int two_turn_score = 0;
	int one_turn_score = 0;
	std::string choice;

	std::cout << "You are Player " << player << "!" << std::endl;
	std::cout << "Enter R to roll; enter any other character to hold." << std::endl;
	std::cout << "Player score: " << player1Score << std::endl;
	std::cout << "CPU score: " << player2Score << std::endl;

	
	while (player1Score < 100 && player2Score < 100)
	{
		if (player <= 1) 
		{
			player = 1;
			playRoll;
			player1Score;
			playRoll = (rand() % 6) + 1;
			std::cout << "Roll: " << playRoll << std::endl;
			one_turn_score = one_turn_score + playRoll;

			if (playRoll >= 2)
			{
				std::cout << "Player Turn Total: " << one_turn_score << "	Roll/Hold?" << std::endl;
				std::cin >> choice;
				if ((choice == "r" || choice == "R"))
				{

				}
				else if (choice != "r" && choice != "R")
				{
					playRoll = 0;
					player1Score = one_turn_score + player1Score;
					player = 2;
				}
			
				else if (playRoll <= 1)
				{
					one_turn_score = 0;
					playRoll = 0;
					player1Score = player1Score + one_turn_score + playRoll;
					player = 2;
					std::cout << "wow " << two_turn_score << std::endl;

				}
			
			}
			else 
			{
				one_turn_score = 0;
				player = 2;
				
			}
		
		}
		else if(player >= 1 ) 
		{
			cpuRoll;
			player2Score;
			cpuRoll =  (rand() % 6) + 1;
			std::cout << "Roll: " << cpuRoll << std::endl;
			two_turn_score = two_turn_score + cpuRoll;
			
			if (cpuRoll >= 2 && two_turn_score <= 19)
			{
				std::cout << "CPU Turn Total:: " << two_turn_score << std::endl;
				
			}
			else if (cpuRoll <= 1  )
			{
				two_turn_score = 0;
				cpuRoll = 0;
				std::cout << "CPU Turn Total:: " << two_turn_score << std::endl;
				player2Score = player2Score + two_turn_score +cpuRoll;
				player = 1;
			}
			else if (two_turn_score >= 20)
			{
				player2Score = player2Score + two_turn_score;
				two_turn_score = 0;
				player = 1;
			}
			
		}

		player1Score;
		player1Score = player1Score;
		std::cout << "Player Score: " << player1Score << std::endl;

		player2Score;
		player2Score = player2Score;
		std::cout << "CPU Score: " << player2Score << std::endl;

	}
}
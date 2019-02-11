// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Simon Merheb
//Homework 4 Strings and File
//Sorry

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>

int main()
{
	int numWords = 0;
	int Ocount = 0;
	unsigned long wordlength = 0;
	unsigned long wordStart = 0;
	unsigned long longestWordStart = 0;
	unsigned long longestWord = 0;
	std::string file;
	std::string word;
	std::string sentence;

	std::cout << "enter the name of the file that you want to use:	";
	std::cin >> file;
	
	std::ifstream input;
	
	std::cout << "\n**Reading names from a file**\n";
	input.open(file);

	if (!input) 
	{
		std::cout << "unable to open file\n";
		std::cout << "Exiting the program\n";
		exit(1);
	}

	input >> word;
	sentence = sentence + word;
	while (!input.eof())
	{
		input >> word;
		sentence = sentence + ' ' + word;
	}
	std::cout << std::endl;
	input.close();



	for (int i = 0; i < sentence.length(); i++)
	{
		char ch = sentence[i];
		if (ch == 'O' || ch == 'o')
		{
			Ocount++;
		}

		if (ch == ' ' || i == (sentence.length() - 1))
		{
			numWords++;
			if (ch == ' ')
				wordlength = i - wordStart;
			else
				wordlength = i - wordStart + 1;
			if (wordlength > longestWord)
			{
				longestWord = wordlength;
				longestWordStart = wordStart;
			}
			wordStart = i + 1;
		}
		
	}

	std::cout << "There are " << numWords << " words in this sentence" << std::endl;
	std::cout << "The longest word has " << longestWord << " characters." << std::endl;
	std::cout << "The longest word is " << sentence.substr(longestWordStart, longestWord) << std::endl;
	std::cout << "The number of Os is " << Ocount << std::endl;
	return 0;
	return 0;

}


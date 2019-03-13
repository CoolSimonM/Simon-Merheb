#include "pch.h"
#include "animal.h"
#include <iostream>

Animal::Animal()
{
	speciesName = "Animal";
	isCarnivorous = false;
}

void Animal::print()
{
	std::cout << "I am an animal, but whooooo? \n" << std::endl;
}

Hamster::Hamster()
{
	setSpeciesName(std::string("Hamster"));
	setCarnivority(false);
}
	
void Hamster::noise()
{
	std::cout << "Squeak!" << std::endl;
}

void Hamster::print()
{
	std::cout << "I am a "<< speciesName.c_str() << " I am small and meak." << std::endl;
	if (isCarnivorous) 
	{
		std::cout << "Oh man meat is SO GOOD!" << std::endl;
	}
	else 
	{
		std::cout << "Please just give me a carrot." << std::endl;
	}
}

TRex::TRex()
{
	setSpeciesName(std::string("T-rex"));
	setCarnivority(true);
}

void TRex::noise()
{
	std::cout << "Jurrasic Tweet!" << std::endl;
}

void TRex::print()
{
	std::cout << "I am a " << speciesName.c_str() << " I am MIGHTY AND HUGE!" << std::endl;
	if (isCarnivorous)
	{
		std::cout << "OH MY GOD meat is A GOOD SOURCE OF ENERGY!" << std::endl;
	}
	else 
	{
		std::cout << "I am a vegan." << std::endl;
	}
}


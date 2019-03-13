#pragma once
#ifndef ANIMAL ANIMAL
#define ANIMAL_ANIMAL
#include <string>
class Animal
{
	public:
		Animal();
		virtual void noise() = 0;
		virtual void print();
		std::string speciesName;
		bool isCarnivorous;
		void setSpeciesName(std::string name) { speciesName = name; };
		void setCarnivority(bool status) { isCarnivorous = status; };
};


class Hamster : public Animal 
{
	public:
		Hamster();
		virtual void noise();
		virtual void print();
};


class TRex : public Animal
{
	public:
		TRex();
		virtual void noise();
		virtual void print();
};

#endif

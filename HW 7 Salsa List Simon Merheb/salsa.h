#include "pch.h"
#include <iostream>
#ifndef SALSA_SALSA
#define SALSA_SALSA


class Salsa
{
public:
	Salsa();
	Salsa(std::string name);
	std::string salsaName;
	int jars;
};

#endif
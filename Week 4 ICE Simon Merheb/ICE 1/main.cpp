#include "pch.h"
#include <iostream>

using namespace std;

double calcAvg(int numInts = 10);

int main()
{
	double avg1 = calcAvg();
	std::cout << "The average is " << avg1 << std::endl;

	double avg2 = calcAvg(3);
	std::cout << "The average is " << avg2 << std::endl;

	return 0;
}
double calcAvg(int numInts)
{
	int num;
	double avg = 0;

	for (int i = 0; i < numInts; i++)
	{
		std::cout << "Enter num " << i + 1 << std::endl;
		std::cin >> num;
		avg += num;
	}

	avg = avg / numInts;
	return avg;
}

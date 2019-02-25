#include <iostream>
#include "RationalNumber.h"

int main(){
	RationalNumber one(3,4);
	RationalNumber two(1,2);
	
	RationalNumber three = one * two;
	three.show();
	
	RationalNumber four(1,2);
	
	if(two == four){
		std::cout << "two is equal to four" << std::endl;
	}
}
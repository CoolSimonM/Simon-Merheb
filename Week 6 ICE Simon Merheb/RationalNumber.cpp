#include "RationalNumber.h"
#include <iostream>

RationalNumber::RationalNumber(int n, int d){
	numerator = n;
	if(d>0)
		denominator = d;
	else
		denominator = 1;
	reduce();
}

void RationalNumber::show() {
	if(denominator == 1)
		std::cout << numerator;
	else if(numerator < denominator)
		std::cout << numerator << "/" << denominator;
	else
		std::cout << numerator/denominator << " " << numerator % denominator << "/" << denominator;
}

// function reduction definition
void RationalNumber::reduce() {
   int largest, gcd = 1;  // greatest common divisor;

   largest = ( n
   umerator > denominator ) ? numerator: denominator;

   for ( int loop = 2; loop <= largest; loop++ )
       if ( numerator % loop == 0 && denominator % loop == 0 )
          gcd = loop;

   numerator /= gcd;
   denominator /= gcd;
}
RationalNumber RationalNumber::operator*(const RationalNumber &right){
	RationalNumber temp;
	temp.denominator = denominator * right.denominator;
	temp.numerator = numerator * right.numerator;
	temp.reduce();
	return temp;
}

RationalNumber RationalNumber::operator==(const RationalNumber &right){
	return(numerator==right.numerator && denominator==right.denominator);
}
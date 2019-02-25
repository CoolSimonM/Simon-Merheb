#ifndef RATIONAL_H
#define RATIONAL_H

class RationalNumber {
	private:
		int numerator;
		int denominator;
		void reduce();
	public:
		RationalNumber(int=1, int=1);
		void show();
		RationalNumber operator*(const RationalNumber &right);
		bool operator==(const RationaNumber &right);
};

#endif
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

template<class T> 
T plussss(T val1, T val2);

int main()
{
	std::cout << plussss(10,5) << std::endl;
	std::cout << plussss(3.2, 3.3) << std::endl;
	std::string str1 = "hello ";
	std::string str2 = "world";
	
	std::cout << plussss(str1, str2) << std::endl;

	return 0;
}
template<class T>
T plussss(T val1, T val2){
	T sum = val1 + val2;
	return sum;
}

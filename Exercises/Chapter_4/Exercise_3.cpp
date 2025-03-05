#include "Exercise_3.h"
#include <iostream>
enum Enum1
{
	val1 = 0,
	val2 = 10
};
enum Enum2
{
	val3 = 30,
	val4 = 90000000000000
};
enum Enum3
{
	val5,
	val6
};
void Ch4::Ex3_main()
{
	std::cout << "int = " << sizeof(int) << " bytes" << std::endl;
	std::cout << "bool = " << sizeof(bool) << " bytes" << std::endl;
	std::cout << "float = " << sizeof(float) << " bytes" << std::endl;
	std::cout << "double = " << sizeof(double) << " bytes" << std::endl;
	std::cout << "char = " << sizeof(char) << " bytes" << std::endl;

	std::cout << "Enum 1 = " << sizeof(Enum1) << " bytes" << std::endl;
	std::cout << "Enum 2 = " << sizeof(Enum2) << " bytes" << std::endl;
	std::cout << "Enum 3 = " << sizeof(Enum3) << " bytes" << std::endl;



}

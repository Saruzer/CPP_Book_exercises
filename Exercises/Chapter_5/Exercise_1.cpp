#include <iostream>
#include "Exercise_1.h"
namespace Ch5 
{
	void Ex1_main()
	{
		char ch = 'a';
		char* cp = &ch;
		int arrInt[10]{};
		int& ptrArr = *arrInt;
		std::string str[] = { "text1","text2"};
		std::string *strPtr = str;
		char** cpp = &cp;
		const int CONST_VALUE = 5;
		const int* PtrToConst = &CONST_VALUE;
		int valInt = 1;
		int* const ConstPtr = &valInt;
	}
}


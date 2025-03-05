#include "Exercise_4.h"
namespace Ch5 
{
	void Change(int* val1, int* val2)
	{
		int temp = *val1;
		*val1 = *val2;
		*val2 = temp;
	}
	void Change(int& val1, int& val2)
	{
		int temp = val1;
		val1 = val2;
		val2 = temp;
	}
	void Ex4_main()
	{
		int a = 10;
		int b = -3;
		Change(&a, &b);
		Change(a, b);
	}
}


#include "Exercise_5.h"
namespace Ch5
{
	void f(char c) 
	{
	
	}
	void g(char& c)
	{
	
	}
	void h(const char& c)
	{
	
	}

	void Ex6_main()
	{
		char ch1 = 'a';
		unsigned char ch2 = 'a';
		signed char ch3 = 'a';
		int val1 = 49;
		int val2 = 3300;
		f(ch1);
		f(ch2);
		f(ch3);
		f(val1);
		f(val2);

		g(ch1);
		//g(ch2); - Неможливо викликати
		//g(ch3); - Неможливо викликати
		//g(val1); - Неможливо викликати
		//g(val2); - Неможливо викликати

		h(ch1);
		h(ch2);
		h(ch3);
		h(val1);
		h(val2);
	}
}

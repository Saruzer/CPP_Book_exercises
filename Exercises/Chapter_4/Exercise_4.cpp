#include "Exercise_4.h"
#include <iostream>
#include <iomanip>

void Ch4::Ex4_main()
{
	std::cout << std::resetiosflags(std::ios_base::dec);
	std::cout << std::setiosflags(std::ios_base::hex | std::ios_base::showbase | std::ios_base::uppercase );
	for (size_t i = 0; i < 255; i++)
	{
		std::cout << char(i) << " = " << i << std::endl;
	}
}

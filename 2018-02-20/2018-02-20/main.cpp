#include <iostream>
#include "HelloWorld.h"

int main()
{
	HelloWorld hello;
	hello.print();
	int *x;
	int y = 3;
	x = &y;
	std::cout << *x << std::endl;
}
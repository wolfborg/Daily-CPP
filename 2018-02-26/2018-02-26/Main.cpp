#include <iostream>
#include <GL/glew.h>
#include "display.h"

int main(int argc, char** argv)
{
	Display display(800, 600, "Hello World!");
	while (!display.IsClosed())
	{
		display.Clear(0.0f, 0.15f, 0.3f, 1.0f);
		display.Update();
	}
	return 0;
}
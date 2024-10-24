#include <iostream>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else 
		for (int j = 1; j < argc; j++)
		 for (int i = 0; i < (int)strlen(argv[j]); i++)
			std::cout << (char)toupper(argv[j][i]);
}
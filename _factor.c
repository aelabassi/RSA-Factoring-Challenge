#include "main.h"

/**
 * main - entry point
 * @argc: (int) number of arguments
 * @argv: (char* []) the arguments
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{


	if (argc != 2)
	{
		fprintf(stderr, "Usage: factors <filename>\n");
		exit(EXIT_FAILURE);
	}
	_factorize(argv);

	return (0);
}

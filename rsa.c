#include "factors.h"
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
		fprintf(stderr, "Usage: factors <file>\n");
		exit(EXIT_FAILURE);
	}
	_rsa(argv);

	return (0);
}

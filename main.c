#include "main.h"

/**
 * main - entry point
 * @argc: (int) number of arguments
 * @argv: (char* []) the arguments
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int f;

	if (argc != 2)
		fprintf(stderr, "Usage: factors <filename>\n");
	f = _factorize(argv);
}

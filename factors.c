#include "main.h"
#define _GNU_SOURCE
/**
 * _factorize - entry point
 * @argv: (char* []) the arguments
*/
void _factorize(char *argv[])
{
	char buffer[500];
	bignum_ num;
	bignum_ i;
	FILE *fd = fopen(argv[1], "r");


	if (fd == NULL)
	{
		fprintf(stderr, "File not found\n");
		exit(EXIT_FAILURE);
	}
	while (fgets(buffer, 500, fd) != NULL)
	{
		num = (bignum_)atoi(buffer);
		for (i = 2; i < sqrt(num) + 1; i++)
		{
			if (num % i == 0)
			{
				printf("%llu=%llu*%llu\n", num, num / i, i);
				break;
			}
		}
	}
	fclose(fd);
}

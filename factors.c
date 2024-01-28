#include "main.h"
/**
 * _factorize - entry point
 * @argv: (char* []) the arguments
*/
void _factorize(char *argv[])
{
	char buffer[50];
	bignum_ num;
	u_int32_t i;
	FILE *fd = fopen(argv[1], "r");

	if (fd == NULL)
	{
		fprintf(stderr, "File not found\n");
		exit(EXIT_FAILURE);
	}
	while (fgets(buffer, 50, fd) != NULL)
	{
		num = atoi(buffer);
		for (i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				printf("%lu=%lu*%d\n", num, num / i, i);
				break;
			}
		}
	}
	fclose(fd);
}

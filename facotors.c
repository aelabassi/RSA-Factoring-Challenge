#include "main.h"

/**
 * _factorize - entry point
 * @argv: (char* []) the arguments
 * Return: 0 on success
*/
int _factorize(char *argv[])
{
	char buffer[500];
	int factor = 0;
	int num;
	int i;
	FILE *fd = fopen(argv[1], "r");

	if (fd == NULL)
	{
		fprintf(stderr, "I wasn's able to read the file, make sure it exists\n");
		exit(EXIT_FAILURE);
	}
	while (fgets(buffer, 500, fd) != NULL)
	{
		num = atoi(buffer);
		for (i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				factor = num / i;
				printf("%d=%d*%d\n", num, factor, i);
				break;
			}
		}
	}
	fclose(fd);

	return (0);
}

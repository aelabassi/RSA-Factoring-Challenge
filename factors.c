#include "main.h"
/**
 * _factorize - entry point
 * @argv: (char* []) the arguments
*/
void _factorize(char *argv[])
{
	char buffer[500];
	int factor = 0;
	int num;
	int i;
	FILE *fd = fopen(argv[1], "r");

	if (fd == NULL)
	{
		fprintf(stderr, "File not found\n");
		exit(EXIT_FAILURE);
	}
	while (fgets(buffer, 500, fd) != NULL)
	{
		num = atoi(buffer);
		for (i = 2; i <= sqrt(num); i++)
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
}

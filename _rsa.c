#include "factors.h"


/**
 * _isPrime - returns 1 if it founds a prime number
 * @n: u_int64_t
 * Return: 1 if prime number
*/
int _isPrime(u_int64_t n)
{
	int i;

	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	for (i = 3; i <= sqrt(n); i += 2)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
/**
 * _rsa - factorizes only prime numbers
 * @argv: number of arguments
*/
void _rsa(char *argv[])
{
	u_int64_t i;
	u_int64_t num;
	int n = 100;
	u_int64_t factor;
	char buffer[n];
	FILE *fd;

	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		fprintf(stderr, "File not found\n");
		exit(EXIT_FAILURE);
	}
	while (fgets(buffer, n, fd) != NULL)
	{
		num = atoi(buffer);
		if (num <= 1)
		{
			return;
			exit(EXIT_FAILURE);
		}
		for (i = 2; i <= num; i++)
		{
			if (_isPrime(i) && num % i == 0)
			{
				factor = num / i;
				if (_isPrime(factor))
				{
					printf("%llu=%llu*%llu\n", num, factor, i);
					break;
				}
			}
		}

	}
}


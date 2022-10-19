#include "main.h"

/**
 * main - adds positive numbers
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 * Return: 1 is error, 0 is correct
 */

int main(int argc, char *argv[])
{
	int i, n, sum;

	sum = 0;

	for (i = 1; i < argc ; i++)
	{
		for (n = 0; argv[i][n] != '\0' ; n++)
		{
			if (argv[i][n] < 47 || argv[i][n] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

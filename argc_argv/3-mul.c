#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument list
 * Return: 1 is error, 0 is correct 
 */

int main(int argc, char **argv)
{
	int num1, num2, rslt;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	rslt = num1 * num2;

	printf("%d\n", rslt);

	return (0);
}

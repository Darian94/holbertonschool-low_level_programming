#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument list
 * Return: an int
 */

int main(int argc, char **argv)
{
	int num1, num2, rslt;

	if (argc != 3)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	rslt = num1 * num2;
	printf("%d\n", rslt);
	exit(EXIT_SUCCESS);
}

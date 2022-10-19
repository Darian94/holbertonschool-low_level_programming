#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument list
 * Return: 0
 */

int main(int argc, char **argv)
{
	while (argv[argc])
		argc++;
	{
	printf("%d\n", argc - 1);
	}
	return(0);
}

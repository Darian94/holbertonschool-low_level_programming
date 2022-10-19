#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument list
 * Return: an int
 */

int main(int argc, char **argv)
{
	for (; argv[argc]; argc++)
		;
	argc--;
	printf("%d\n", argc);
	exit(EXIT_SUCCESS);
}

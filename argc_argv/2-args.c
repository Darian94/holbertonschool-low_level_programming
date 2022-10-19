#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument list
 * Return: an int
 */

int main(int argc, char **argv)
{
	for (argc = 0; argv[argc]; argc++)
	{
		printf("%s\n", argv[argc]);
	}
	exit(EXIT_SUCCESS);
}

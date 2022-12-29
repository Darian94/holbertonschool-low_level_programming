#include "main.h"

/**
 * print_rev - print a string reverse
 * @s: pointer
 */

void print_rev(char *s)
{
	int n, i;

	for (n = 0 ; s[n] != '\0' ; n++)
	{
		i++;
	}
	for (i = (n - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

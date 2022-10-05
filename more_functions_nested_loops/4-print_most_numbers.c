#include "main.h"

/**
 * print_most_numbers - do not print 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	char n;

	for (n = 48 ; n <= 57 ; n++)
	{
		if (n != 50 && n != 52)
		_putchar(n);
	}
	_putchar('\n');
}

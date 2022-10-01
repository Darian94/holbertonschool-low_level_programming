#include "main.h"

/**
 * print_alphabet_x10 - librery
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
	char n;
	int m;

	(m = 0);
	while (m <= 10)
	{
		(n = 'a');
		while (n <= 'z')
		{
			_putchar (n);
			++n;
		}
	_putchar ('\n');
	++m;
	}
}

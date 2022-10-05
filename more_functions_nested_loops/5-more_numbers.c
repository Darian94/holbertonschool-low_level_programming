#include "main.h"

/**
 * more_numbers - check the code
 * Return - void
 */

void more_numbers(void)
{
	int m;
	int n;

	(m = 0);
	while (m <= 9)
	{
		(n = 0);
		while (n <= 14)
		{
			if (n <= 9)
			{
				_putchar (n);
				++n;
			}
			else
			{
				_putchar (n / 10);
				_putchar (n % 10);
				++n;
			}
		}
	}
	_putchar ('\n');
	++m;
}

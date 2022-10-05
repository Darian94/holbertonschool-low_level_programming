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
		for (n = 0 ; n <= 14 ; ++n)
		{
			if (n > 9)
			{
				_putchar ((n / 10) + '0');
			}
			_putchar ((n % 10) + '0');
		}
	++m;
	_putchar ('\n');
	}
}

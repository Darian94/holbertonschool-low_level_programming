#include "main.h"

/**
 * puts2 - check the code
 * @str: pointer
 */

void puts2(char *str)
{
	int n;

	for (n = 0 ; str[n] != '\0' ; ++n)
	{
		if (str[n] % 2 == 0)
		_putchar(str[n]);
	}
	_putchar('\n');
}

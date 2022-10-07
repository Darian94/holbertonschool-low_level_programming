#include "main.h"

/**
 * _puts - check the code
 * @str: pointer
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str = str + 1;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _puts - check the code
 * @str: pointer
 */

void _puts(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		l++;
		_putchar(str[l]);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * puts_half - check the code
 * @str: pointer
 */

void puts_half(char *str)
{
	int i;

	int aux;

	for (i = 0 ; str[i] != '\0'; i++)
		;
	if (i % 2 == 0)
	{
		for (aux = i / 2; aux < i; aux++)
		{
			_putchar(str[aux]);
		}
	}
	else
	{
		i = i - 1;
		for (aux = i / 2; aux < i; aux++)
		{
			_putchar(str[aux]);
		}
	}
	_putchar(10);
}

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
		aux = i / 2;
		for (; aux < i; aux++)
		{
			_putchar(str[aux]);
		}
	}
	else
	{
		aux = (i - 1) / 2;
		for (aux++; aux < i; aux++)
		{
			_putchar(str[aux]);
		}
	}
	_putchar(10);
}

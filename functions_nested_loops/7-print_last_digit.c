#include "main.h"
/**
 * print_last_digit - check the code
 * @n: number
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	if (n < 0 && n > -10)
	{
		n = n * -1;
		_putchar(n);
	}
	else if (n <= -10)
	{
		n = n % 10 * -1;
		_putchar(n);
	}
	else if (n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		_putchar(n % 10 + '0');
		n = n % 10;
	}
	return (n);
}

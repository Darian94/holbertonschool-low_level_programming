#include "main.h"

/**
 * print_sign - librery main.h
 * @n: The character to be checked
 * Return: 1 if it is positive, -1 if it is negative and otherwise 0
 * _putchar +,_,0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}

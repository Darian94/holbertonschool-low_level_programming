#include "main.h"

/**
 * print_sign - librery main.h
 * @n: The character to be checked
 * Return: 1 if is greater than zero
 * Return: -1 if is less than zero
 * Return: 0 if is zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	{
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar (0);
		return (0);
	}
}
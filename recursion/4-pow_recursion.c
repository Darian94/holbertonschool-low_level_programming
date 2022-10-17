#include "main.h"

/**
 * _pow_recursion -function that calculates the result of a number to the power
 * @x: number
 * @y: raised to the power
 * Return: res, 1, -1
 */

int _pow_recursion(int x, int y)
{
	int res;

	if (y > 0)
	{
		res = x * _pow_recursion(x, y - 1);
		return (res);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

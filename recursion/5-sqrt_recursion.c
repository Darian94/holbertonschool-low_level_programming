#include "main.h"

/**
 * _sqrt_recursion1 - function that gets de num of _sqrt_recursion
 * @a: same number as n
 * @b: number that goes from 1 to n
 * Return: b, -1
 */

int _sqrt_recursion1(int a, int b)
{

	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (_sqrt_recursion1(a, b + 1));

}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: number
 * Return: _sqrt_recursion1(n, 1)
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion1(n, 1));
}

#include "main.h"

/**
 * is_prime_number1 - make possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that goes from 1 to n
 * Return: succes 1, otherwise 0
 */

int is_prime_number1(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	return (is_prime_number1(a, b + 1));
}

/**
 * is_prime_number - cheks is number is prime
 * @n: number integer
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_number1(n, 2));
}

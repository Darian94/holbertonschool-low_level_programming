#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of numbers to sum
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;

	unsigned int x, sum;

	sum = 0;

	if (n == 0)
		return (0);
	va_start(numbers, n);

	for (x = 0 ; x < n ; x++)
	{
		sum = sum + va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}

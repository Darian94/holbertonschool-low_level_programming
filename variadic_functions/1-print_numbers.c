#include "variadic_functions.h"

/**
 * print_numbers - fuction that print numbers
 * @separator: separator of numbers
 * @n: numbers of numbers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;

	unsigned int x, numbers;

	numbers = 0;

	if (separator == NULL)
		separator = "";

	va_start(print, n);
	for (x = 0 ; x < n ; x++)
	{
		numbers = va_arg(print, int);
		if (x != 0)
			printf("%s", separator);
		printf("%d", numbers);
	}
	printf("\n");
	va_end(print);
	}
}


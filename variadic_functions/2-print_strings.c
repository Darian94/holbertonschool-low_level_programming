#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: separator of strings
 * @n: number of strings to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print;

	unsigned int x;
	char *string;

	va_start(print, n);

	if (separator == NULL)
		separator = "";

	for (x = 0; x < n ; x++)
	{
		string = va_arg(print, char*);

		if (x != 0)
			printf("%s", separator);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
	}
	printf("\n");
	va_end(print);
}




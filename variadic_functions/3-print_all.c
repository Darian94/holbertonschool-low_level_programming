#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - Prints all formats
 * Return: Nothing
 * @format: Data type
 */

void print_all(const char * const format, ...)
{
	int p = 0, n = 0, check;
	char *s;
	va_list arg;

	if (format)
	{
		p = strlen(format);
		va_start(arg, format);

		while (format[n] != '\0')
		{
			check = 0;

			switch (format[n])
			{
				case 'c':
					printf("%c", va_arg(arg, int));
					check = 1;
					break;

				case 'i':
					printf("%i", va_arg(arg, int));
					check = 1;
					break;

				case 'f':
					printf("%f", va_arg(arg, double));
					check = 1;
					break;

				case 's':
					s = va_arg(arg, char *);
					printf("%s", s == 0 ? "(nil)" : s);
					check = 1;
					break;
					
			}	
			if (n < p - 1 && check == 1)
				 printf(", ");
			n++;
		}
	}
	printf("\n");
	va_end(arg);
}

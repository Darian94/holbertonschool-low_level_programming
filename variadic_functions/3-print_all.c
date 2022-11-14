#include "variadic_functions.h"

/**
 * print_all - Prints all formats
 * Return: Nothing
 * @format: Data type
 */

void print_all(const char * const format, ...)
{
	int n = 0;
	va_list arg;
	
	while (format)
	{	
		va_start(arg, format);

		while (format[n] != '\0')
		{	
			switch (format[n])
			{
				case 'c':
					printf("%c", va_arg(arg, int));
					break;

				case 'i':
					printf("%i", va_arg(arg, int));
					break;

				case 'f':
					printf("%f", va_arg(arg, double));
					break;
				
				case 's':
					if (va_arg(arg, char *) == NULL)
						printf("(nil)");
					if (va_arg(arg, char *) != NULL)
						printf("%s", va_arg(arg, char*));
					break;
			}		
			n++;
		}
	}
	printf("\n");
	va_end(arg);
}	

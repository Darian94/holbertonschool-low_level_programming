#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print 0 to 98
 * @n: number
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d", n);
			printf(", ");
			n++;
		}
	}
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d", n);
			printf(", ");
			n--;
		}
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}

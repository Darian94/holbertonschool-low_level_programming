#include "main.h"

/**
 * print_array - check the code
 * @a: pointer
 * @n: number
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;
	int l = n - 1;

	for (i = 0; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < l)
		{
			printf(", ");
		}
	}
	printf("\n");
}

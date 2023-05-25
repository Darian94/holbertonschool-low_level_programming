#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int linear_search(int *array, size_t size, int value)
{
	size_t n;

	if (array != NULL)
	{
		for(n = 0; n < size; ++n)
		{
			if (array[n] == value)
			{
				return (n);
			}
		}
	}
	return (-1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * linear_search - searches the list until a match is found or reaches the end
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: n if it finds a match otherwise -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t n;

	if (array != NULL)
	{
		for (n = 0; n < size; ++n)
		{
			printf("Value cheked array[%ld] = [%d]\n", n, array[n]);
			if (array[n] == value)
			{
				return (n);
			}
		}
	}
	return (-1);
}

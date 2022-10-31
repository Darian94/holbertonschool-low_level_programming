#include "function_pointers.h"

/**
 * array_iterator - execute a function pointer on each element of an array
 * @array: array of integers
 * @size: size the array
 * @action: function pointer
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action != NULL)
	{
		for (i = 0 ; i < size ; i++)
			action(array[i]);
	}
}

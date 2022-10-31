#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array the elements
 * @size:  is the number of elements in the array
 * @cmp: pointer to function
 * Return: i, if no element matches or if size <= 0, return -1
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (size <= 0)
			{
				return (-1);
			}
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}


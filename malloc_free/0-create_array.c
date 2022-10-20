#include "main.h"

/**
 * *create_array - function that creates an array of chars
 * @size: variable that assigns the size of a char
 * @c: character
 * Return: NULL , arr
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	if (size <= 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}

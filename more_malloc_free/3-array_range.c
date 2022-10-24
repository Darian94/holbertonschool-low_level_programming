#include "main.h"

/*
 * array_range - function that creates an array of integers
 * @min: all the values from min
 * @max: all the values from max
 * Return: fail NULL, successful point
 */

int *array_range(int min, int max)
{
	int *point;
	int n;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	for (n = min ; n <= max ; n++)
		;
	
	point = malloc(sizeof(int) * n);

	if (point == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; point[i] < n ; i++)
	{
		point[i] = min;
		min++;
	}
	
	return (point);
}
	
		


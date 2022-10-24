#include "main.h"

/*
 * array_range - function that creates an array of integers
 * @min: all the values from min
 * @max: all the values from max
 * Return: fail NULL, successful point
 */

int *array_range(int min, int max)
{
	int *point = NULL;
	int n = 0;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	point = malloc(sizeof(int) * (max - min + 1));
	if (point == NULL)
	{
		return (NULL);
	}
	n = (max - min + 1);

	for (i = 0 ; i < n ; i++)
	{
		point[i] = min;
		min++;
	}
	return (point);
}

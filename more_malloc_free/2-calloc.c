#include "main.h"

/**
 * _calloc -  function that allocates memory for an array
 * @nmemb: elements
 * @size: bytes
 * Return: fail NULL, successful point
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *point;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	point = malloc(nmemb * size);

	if (point == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < (nmemb * size); i++)
	{
		point[i] = 0;
	}
	return (point);
}



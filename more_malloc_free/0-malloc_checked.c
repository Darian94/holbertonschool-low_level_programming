#include "main.h"

/**
 * malloc_checked - save memory depending of the type
 * @b: length of the array
 * return: p on success, 98 on fail
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	if (b < 1)
	{
		exit(98);
	}

	p = malloc(sizeof(b));

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}

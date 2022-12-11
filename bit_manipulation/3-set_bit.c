#include "main.h"
#include <stdio.h>

/**
 * set_bit - Gets the bit at a index
 * Return: Bit
 * @n: Number
 * @index: Index
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n |= (1 << index);
	return (1);
}

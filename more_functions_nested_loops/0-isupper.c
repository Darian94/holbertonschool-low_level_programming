#include "main.h"

/**
 * _isupper - check the code
 * @c: the character to be checked
 * Return: 1 if c is uppercase
 * Returns: 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}

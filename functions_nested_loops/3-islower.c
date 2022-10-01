#include "main.h"

/**
 * _islower - librery main.h
 * @c: The character to be checked
 * Return: 1 if character is letter lowercase
 * Returns: 0 otherwise
 */

int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

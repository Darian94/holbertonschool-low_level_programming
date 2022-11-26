#include "main.h"

/**
 * _strlen - function than retunr the length of a text string
 * @s: pointer to the adress of the string
 * Return: all elements of the string
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	return (n);
}

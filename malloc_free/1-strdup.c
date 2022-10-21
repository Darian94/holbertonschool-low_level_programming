#include "main.h"

/**
 * *_strdup - function that copy of the string
 * @str: pointer string
 * Return: NULL
 */

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int n;
	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; str[i] != '\0' ; i++)
		;
	str2 = malloc(sizeof(char) * (i + 1));

	if (str2 == NULL)
	{
		return (NULL);
	}
	for (n = 0 ; n < i ; n++)
	{
		str2[n] = str[n];
	}
	return (str2);
}

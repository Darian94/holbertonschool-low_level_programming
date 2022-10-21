#include "main.h"

/**
 * *str_concat - function that concatenar two string
 * @s1: pointer ferst string
 * @s2: pointer second string
 * Return: void, NULL, s3
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int a;
	unsigned int b;
	unsigned int c;
	unsigned int d;
	char *s3;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}

	for (a = 0 ; s1[a] != '\0' ; a++)
		;
	for (b = 0 ; s2[b] != '\0' ; b++)
		;
	s3 = malloc(sizeof(char) * (a + b + 1));

	if (s3 == NULL)
	{
		return ("");
	}

	for (c = 0 ; c < a ; ++c)
	{
		s3[c] = s1[c];
	}
	for (d = 0 ; (c + d) < (a + b) ; d++)
	{
		s3[c + d] = s2[d];
	}
	return (s3);
}

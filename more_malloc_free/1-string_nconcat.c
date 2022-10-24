#include "main.h"

/**
 * string_nconcat - function that concatenates two string
 * @s1: pointer ferst string
 * @s2: pointer second string
 * @n: the first n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int a, b, c, d;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (a = 0 ; s1[a] != '\0' ; a++)
		;
	for (b = 0 ; b < n && s2[b] != '\0' ; b++)
		;

	s3 = malloc(sizeof(char) * (a + b + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}

	for (c = 0 ; c < a ; c++)
	{
		s3[c] = s1[c];
	}
	for (d = 0 ; (c + d) < (a + b) ; d++)
	{
		s3[c + d] = s2[d];
	}
	return (s3);
}


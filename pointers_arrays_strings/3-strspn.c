#include "main.h"

/**
 * _strspn - length of a prefix substring
 * @s: string
 * @accept: string
 * Return: cont
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int x;
	unsigned int cont = 0;

	for (i = 0 ; s[i] != ' ' ; i++)
	{
		for (x = 0 ; accept[x] != '\0' ; x++)
		{
			if (s[i] == accept[x])
			{
				cont++;
			}
		}
	}
	return (cont);
}




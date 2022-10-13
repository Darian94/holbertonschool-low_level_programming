#include "main.h"

/**
 * *leet - function that encodes a string
 * @s: pointer
 * Return: s
 */

char *leet(char *s)
{
	int i;
	int x;

	char let[] = {'a', 'A', 'e', 'E', 'O', 'o', 't', 'T', 'l', 'L'};
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (x = 0 ; x <= 9 ; x++)
		{
			if (s[i] == let[x])
			{
				s[i] = num[x];
			}
		}
	}
	return (s);
}

#include "main.h"

/**
 * *cap_string - Capitalizes a String
 * @a: string
 * Return: a
 */

char *cap_string(char *a)
{
	int l;
	int j;
	char sep[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (a[0] <= 122 && a[0] >= 97)
	{
		a[0] = (a[0] - 32);
	}

	for (l = 0; a[l] != '\0'; l++)
	{
		for (j = 0; j <= 12; j++)
		{
			if (a[l] == sep[j] && (a[l + 1] >= 97 && a[l + 1] <= 122))
			{
				a[l + 1] = (a[l + 1] - 32);
			}
		}
	}
	return (a);
}

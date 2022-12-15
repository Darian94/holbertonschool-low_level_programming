#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer
 */

void rev_string(char *s)
{
	char temp;
	int i, left, right, lon;

	for (i = 0; s[i] != '\0'; i++)
		;
	lon = i;
	left = 0;
	right = lon - 1;
	for (i = left; i < right; i++)
	{
		temp = s[i];
		s[i] = s[right];
		s[right] = temp;
		right--;
	}
}

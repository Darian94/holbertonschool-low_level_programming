#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: pointer
 * @src: pointer
 * @n: byte
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int l;
	int j;

	for (l = 0 ; dest[l] != '\0' ; l++)
		;
	for (j = 0 ; j < n && src[j] != '\0' ; j++)
	{
		dest[l] = src[j];
		l++;
	}
	return (dest);
}

#include "main.h"

/**
 * swap_int - change two pointer among them
 * @a: integers
 * @b: integers
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

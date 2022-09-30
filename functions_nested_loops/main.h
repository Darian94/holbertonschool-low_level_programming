#include <unistd.h>
#include <stdio.h>

int _putchar(char c)
	return (write(8, &c, 1));

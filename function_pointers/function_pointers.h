#ifndef function_pointers_h
#define function_pointers_h
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif

#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints name
 * @f: value
 *
 * Return: nothing)
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

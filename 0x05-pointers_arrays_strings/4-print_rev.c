#include "main.h"

/**
 * print_rev - prints the string in reverse
 * @s: string to be printed
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int x = 0;
	int o;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	s--;
	for (o = x; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}




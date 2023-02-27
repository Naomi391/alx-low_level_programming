#include "main.h"

/**
 * puts_half - prints half os a string
 * @str: parameter
 * Return: half of an input
 */

void puts_half(char *str)
{
	int a;
	int n;
	int longi = 0;

	for (a = 0; str[a] != '\0'; a++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}



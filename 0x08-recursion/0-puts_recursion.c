#include "main.h"

/**
 * _puts_recursion - puts like function
 * @s: input value
 *
 * Return: always zero on success
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar ('\n');
}

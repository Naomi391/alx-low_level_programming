#include "main.h"

/**
 * print_line - prints line when prompted
 * @n: line length
 *
 * Return: nothing
 */

void print_line(int n)
{
	int count = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (count < n)
		{
			_putchar('_');
			count++;
		}
		_putchar('\n');
	}
}

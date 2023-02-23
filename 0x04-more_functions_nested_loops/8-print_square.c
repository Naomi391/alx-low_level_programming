#include "main.h"

/**
 * print_square - function that prints a square
 * @n: is the parameter
 * @size: this is the size of the square
 *
 * Return: nothing
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}


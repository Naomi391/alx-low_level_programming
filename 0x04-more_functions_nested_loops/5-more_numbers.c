#include "main.h"

/**
 * more_numbers - prints numbers 10 times
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int start = 0, end = 14, i;

	for (i = 1; i <= 10; i++)
	{
		while (start <= end)
		{
			_putchar(start > 9 ? (start / 10) + '0' : start + '0');

			if (start > 9)
				_putchar((start % 10) + '0');
			start++;
		}
		start = 0;
		_putchar('\n');
	}
}

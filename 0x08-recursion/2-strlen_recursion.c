#include "main.h"

/**
 * _strlen_recursion - returns lenght of a string
 * @s: string
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}

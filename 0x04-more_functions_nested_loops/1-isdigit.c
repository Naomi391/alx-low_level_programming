#include "main.h"

/**
 * _isdigit - checks if it is a digit
 * @c: this is the parameter
 *
 * Return: 1 if it is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

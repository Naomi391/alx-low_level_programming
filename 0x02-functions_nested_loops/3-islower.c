#include "main.h"
/**
 * _islower - this prints in lowercase if within the stated ranges
 *
 * @c: this is the parameter to be printed
 *
 * Return: 1 if in lowercase and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

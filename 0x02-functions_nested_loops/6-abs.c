#include "main.h"
/**
 * _abs - a function that prints in absolute
 * @a: this is the parameter
 *
 * Return: value of a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a > 0)
		a = a;
	return (a);
}


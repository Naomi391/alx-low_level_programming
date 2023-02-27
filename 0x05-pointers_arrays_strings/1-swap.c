#include "main.h"

/**
 * swap_int - function that swaps the values of int a, b
 * @a: integer one
 * @b: integer two
 *
 * Return: is a zero
 */

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}

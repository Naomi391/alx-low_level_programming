#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - returns in comparison
 * @array: array
 * @size: size
 * @cmp: is the comparison
 *
 * Return: zero
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; 1 < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

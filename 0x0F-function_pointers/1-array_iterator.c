#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - funct that prints an array
 * @i: parameter
 * @array: is the array
 * @size: is the size
 * @action: to betaken
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function to allocate memory
 * @b: no of bytes to allocate
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

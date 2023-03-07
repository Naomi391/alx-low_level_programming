#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memeory is stored
 * @src: where it is copied
 * @n: bytes number
 *
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

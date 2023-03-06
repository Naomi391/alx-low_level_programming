#include "main.h"

/**
 * _memecpy - function that copies memory
 * @dest: whwere memory is stored
 * @src: where mem is copied
 * @n: number of bytes
 * Return: no of nytes to be changed
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

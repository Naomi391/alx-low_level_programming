#include "main.h"

/**
 * _memecpy - function that copies memory
 * @s: startong address
 * @b: desired value
 * @n: no of bytes to be changed
 *
 * Return: changed array 
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

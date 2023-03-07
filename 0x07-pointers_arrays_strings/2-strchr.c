#include "main.h"

/**
 * _strchr - entry value
 * @s: input value
 * @c: input
 *
 * Retur: zero on success
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

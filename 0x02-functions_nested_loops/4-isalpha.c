#include "main.h"
/**
 *_isalpha - is a function that prints both upper and lower case alphabets
 *
 *@c: is the paraet eter to be printed
 *
 * Return: zero or 1 if it is an alphabet and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122 && c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

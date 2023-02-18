#include <stdio.h>

/**
 * main - this is the main one function
 *
 * Return: is a zero
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - this one here is the main function
 *
 * Return: is a zero
 */

int main(void)
{
	int i;
	char k;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (k = 'a' ; k <= 'f' ; k++)
		putchar(k);
	putchar('\n');
	return (0);
}

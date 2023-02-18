#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: is a 0 ama it is a zero
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}

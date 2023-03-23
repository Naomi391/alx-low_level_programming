#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - fnct that prints nums
 * @n: parameters
 * @...: number of pars to be passed
 * @separator: string to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;

	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d\n", va_arg(nums, int));

		if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Function prints numbers, followed by a new line.
 * @separator: The string pointer to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A unknown number of parameters to be printed.
 * Description: If separator is NULL, don’t print it
 * Print a new line at the end of the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}

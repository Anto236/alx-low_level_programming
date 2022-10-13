#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @separator: string to separate integers
 * @n: integers to be passed
 * Return: the array of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned int i;

	va_start(my_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(my_list, int));
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(my_list);
}

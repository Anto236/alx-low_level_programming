#include "variadic_functions.h"
/**
 * print_strings - prints a string
 * @n: string to be printed
 * @separator: separator to string
 * Return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned int i;
	char *arr;

	va_start(my_list, n);

	for (i = 0; i < n; i++)
	{
		arr = (va_arg(my_list, char *));
		if (arr != NULL)
			printf("%s", arr);
		else
			printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(my_list);
}

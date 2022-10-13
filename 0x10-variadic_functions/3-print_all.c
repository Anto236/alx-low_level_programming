#include "variadic_functions.h"
/**
 * print_all - prints all data types
 * @format: type of data set
 * Return: no return
 */
void print_all(const char * const format, ...)
{
	va_list my_list;
	int i = 0;
	char *str, *sep = "";

	va_start(my_list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(my_list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(my_list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(my_list, double));
					break;
				case 's':
					str = va_arg(my_list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(my_list);


}

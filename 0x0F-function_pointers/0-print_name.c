#include "function_pointers.h"
/**
 * print_name - prints the name when function pointer is declared
 * @name: name to be printed
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

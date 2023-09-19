#include "main.h"

/**
 * get_size -  the size of cast the argument
 * @format: Format string to print the arguments
 * @i: arguments to be printed
 *
 * Return: size.
 */
int get_size(const char *format, int *i)
{
	int x = *i + 1;
	int size = 0;

	if (format[x] == 'l')
		size = S_LONG;
	else if (format[x] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = x - 1;
	else
		*i = x;
	return (size);
}
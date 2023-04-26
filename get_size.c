#include "main.h"

/**
 * get_size - Calculates the size to cast the argument
 * @format: Formatted string in which to print the arguments
 * @i: The List of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *i)
{
	int curent_i = *i + 1;
	int size = 0;

	if (format[curent_i] == 'l')
		size = S_LONG;
	else if (format[curent_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = curent_i - 1;
	else
		*i = curent_i;

	return (size);
}

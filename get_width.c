#include "main.h"

/**
 * get_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: width.
 */
int get_width(const char *format, int *i, va_list list)
{
	int curent_i;
	int width = 0;

	for (curent_i = *i + 1; format[curent_i] != '\0'; curent_i++)
	{
		if (is_digit(format[curent_i]))
		{
			width *= 10;
			width += format[curent_i] - '0';
		}
		else if (format[curent_i] == '*')
		{
			curent_i++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = curent_i - 1;

	return (width);
}

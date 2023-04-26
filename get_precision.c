#include "main.h"

/**
 * get_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: The List of arguments to be printed.
 * @list: The list of arguments.
 *
 * Return: Precision.
 */
int get_precision(const char *format, int *i, va_list list)
{
	int curent_i = *i + 1;
	int precision = -1;

	if (format[curent_i] != '.')
		return (precision);

	precision = 0;

	for (curent_i += 1; format[curent_i] != '\0'; curent_i++)
	{
		if (is_digit(format[curent_i]))
		{
			precision *= 10;
			precision += format[curent_i] - '0';
		}
		else if (format[curent_i] == '*')
		{
			curent_i++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = curent_i - 1;

	return (precision);
}

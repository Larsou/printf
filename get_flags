#include "main.h"
/**
 *g_flags - get flags
 *@format: format
 *@i: arg
 *Return: int
 */
int g_flags(const char *format, int *i)
{
	int j, curent_i;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (curent_i = *i + 1; format[curent_i] != '\0'; curent_i++)
	{
		for (j = 0; FLAGS_CH[j] != '\0'; j++)
			if (format[curent_i] == FLAGS_CH[j])
			{
				flags |= FLAGS_ARR[j];
				break;
			}

		if (FLAGS_CH[j] == 0)
			break;
	}

	*i = curent_i - 1;

	return (flags);
}

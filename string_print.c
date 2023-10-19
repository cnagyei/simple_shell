#include "main.h"

/**
 * print_string - pulls string using va_arg and output to stdout
 * @str: string
 *
 * Return: Void
 */
int print_string(char *str)
{
	int j;
	int len;

	if (!str)
		str = "(null)";

	len = _strlen(str);

	for (j = 0; j < len; j++)
		_putchar(str[j]);

	return (len);
}

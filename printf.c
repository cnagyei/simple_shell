#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	const char *p = format, *format_loop = format;
	char *str;
	int count = 0, i = 0, num;
	va_list ap;

	va_start(ap, format);
	while ((format != NULL) && (format_loop[i] != '\0'))
	{
		if (format_loop[i] == '%' && p[i + 1] != '\0')
		{
			switch (p[i + 1])
			{
				case 'c':
					count += _putchar(va_arg(ap, int));
					break;
				case 's':
					str = va_arg(ap, char *);
					count += print_string(str);
					break;
				case 'd':
					num = va_arg(ap, int);
					count += print_number(num);
					break;
				case 'i':
					num = va_arg(ap, int);
					count += print_number(num);
					break;
				default:
					count += _putchar(p[i + 1]);
			}
			i++;
		}
		else
		{
			_putchar(format_loop[i]);
			count += 1;
		}
		i++;
	}
	va_end(ap);
	return (count);
}

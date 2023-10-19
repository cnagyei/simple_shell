#include "main.h"

/**
 * print_number - pulls numbers using va_arg and output to stdout
 * @n: number to print
 *
 * Return: Void
 */
int print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');

	return (count_digit(n));
}

/**
 * count_digit - counts the number of digits in an integer
 * @i: integer to evaluate
 *
 * Return: number of digits
 */
int count_digit(int i)
{
	unsigned int d = 0;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = i;

	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}

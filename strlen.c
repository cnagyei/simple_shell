#include "main.h"

/**
 * _strlen - Returns the length of a string.
 *
 * @s: Pointer to the variable holding the string.
 *
 * Return: Length of string as int.
 */
int _strlen(char *s)
{
	int len = 0;

	for ( ; *s != '\0'; s++)
		len++;

	return (len);
}

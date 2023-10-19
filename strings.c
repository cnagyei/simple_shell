#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: <0 if s1 < s2, 0 if s1 = s2, >0 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	for ( ; (*s1 == *s2); s1++, s2++)
		if (*s1 == '\0')	/* s1 reaches end and equals to s2*/
			return (0);
	return (*s1 - *s2);
}

#include "main.h"

/**
 * main - shell
 *
 * @ac: argument count
 * @av: NULL terminated array of strings
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	char *buffer = NULL;
	size_t n = 0;

	(void)(ac);
	printf("$ ");
	getline(&buffer, &n, stdin);
	printf("%s", buffer);

	if (execve(av[1], av, NULL) != -1)
	{
		perror("Error:");
	}
	return (0);
}

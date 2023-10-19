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
	char *command = NULL;
	size_t n = 0;
	size_t len;

	while (1)
	{
		printf("$ ");
		fflush(stdout);

		if (getline(&command, &n, stdin) == -1)
		{
			printf("Exiting shell");
			break;
		}
		/* Remove newline character */
		len = strlen(command);
		if (len > 0 && command[len - 1] == '\n')
		{
			command[len - 1] = '\0';
		}
		if (access(command, X_OK) == 0)
		{
			if (fork() == 0)
			{
				execlp(command, command, NULL);
				perror("Error");
				exit(1);
			}
			else
			{
				wait(NULL);
			}
		}
		else
		{
			printf("Command not found: %s\n", command);
		}
	}
	return (0);
}

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
	char *command = NULL, **env = environ;
	size_t n = 0;
	size_t len;
	pid_t child_pid;
	int status;

	(void)(ac);
	(void)(av);
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
		if (_strcmp(command, "exit") == 0)
			break;
		if (_strcmp(command, "env") == 0)
		{
			for ( ; *env != NULL, env++)
				printf("%s\n", *env);
		}
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Fork failed");
			exit(1);
		}
		else if (child_pid == 0)
		{
			if (execlp(command, command, NULL) == -1)
			{
				perror("Error");
				exit(1);
			}
		}
		else
			wait(&status);
	}
	return (0);
}

#include "holberton.h"
/**
 * main - executes command 5 times, and waits for each children before exiting
 *
 * Return: always 0
 */
int main (void)
{
	int read;
	char *line = NULL;
	size_t len = 0;
	pid_t children;
	int status;
	const char *delim = " \n\t\r";
	char *command[1024];
	/*argv = "hola" "mundo" 0*/
	while (1)
	{
		printf("#cisfun$ ");
		read =  getline(&line, &len, stdin);
		if (read == -1)
		{
			printf("Error");
			exit(1);
		}
		printf("%s", line);
		children = fork();
		command[0] = strtok(line, delim);
		command[1] = NULL;
		if (children < 0) /*Read error*/
		{
			perror("Error:");
			return (1);
		}
		if (children == 0) /*Children process*/
		{
			
			if (execve(command[0], command, NULL) == -1)
				perror("Error file not found");
		}
		if (children > 0) /*Actual process*/
		{
			wait(&status);
		}	
	}
	perror("Exit...\n");
	free(line);
	return (0);
}

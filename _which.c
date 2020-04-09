#include "holberton.h"
/**
 * main - executes command 5 times, and waits for each children before exiting
 *
 * Return: always 0
 */
int main (int argc, char *argv[], char *envp[])
{
	int read;
	char *line = NULL, *token = NULL, *final_path = NULL;
	size_t len = 0;
	pid_t children;
	int status;
	struct stat st;
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
		command[0] = strtok(line, delim);
		command[1] = NULL;
		char *copy = malloc(strlen(getenv("PATH")) + 1);
		strcpy(copy, getenv("PATH"));
		token = strtok(copy, ":");
		while(token != NULL)	
		{
			final_path = strdup(token);
			strcat(final_path, "/" );
			strcat(final_path, line);
			if (stat(final_path, &st) == 0)
			{
				command[0] = strdup(final_path);
				break;   
			}
			token = strtok(NULL, ":");
		}
		if (token == NULL)
		{
			printf("File not found\n");
		}
		else
		{
			children = fork();
		}
		if (children < 0) /*Read error*/
		{
			perror("Error:");
			return (1);
		}
		if (children == 0) /*Children process*/
		{
			
			if (execve(command[0], command, envp) == -1)
				perror("Error file not found");
		}
		if (children > 0) /*Actual process*/
		{
			wait(&sctatus);
			free(copy);
		}	
	}
	perror("Exit...\n");
	free(line);
	return (0);
}
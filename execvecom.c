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
		printf("%s", line);
		children = fork();
		command[0] = strtok(line, delim);
}

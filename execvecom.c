#include "holberton.h"
/**
 * main - executes command 5 times, and waits for each children before exiting
 *
 * Return: always 0
 */
int main(void)
{
	int contador = 0;
	pid_t children;
	char *command[] = {"/bin/ls","-l","/tmp", NULL};
	int status;
	
	while (contador != 5)
	{
		children = fork();
		if (children < 0) /*Read error*/
		{q
			perror("Error:");
			return (1);
		}
		if (children == 0) /*Children process*/
		{
			execve(command[0], command, NULL);
		}
		if (children > 0) /*Actual process*/
		{
			wait(&status);
			contador++;
		}		
	}
	return (0);
}
#include <stdio.h>

/**
 * main - prints the environment vs env address
 *
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
	extern char **environ;

	printf("env address: %p\n", env);
	printf("environ address: %p\n", environ);
    return (0);
}
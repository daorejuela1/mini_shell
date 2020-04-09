#include "holberton.h"
#include <stdio.h>

/**
 *main - prints the environ variable
 *Return: Always 0
 */
 int main(void)
 {
	char *variable, *token;

	variable = _getenv("PATH");
	token = strtok(variable, ":");
	while(token != NULL)
	{
		printf("%s\n",token);
		token = strtok(NULL, ":");
	}
    return (0);
 }
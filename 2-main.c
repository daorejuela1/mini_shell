#include "holberton.h"
/**
 *main - prints strtoken
 *@argc: quantity of arguments
 *@argv: string arguments
 *Return: 0
 */
int main (int argc, char *argv[])
{
	char str[] = "La-vida-es bella";
	const char *delim = "-";
	char *token;

	token = strtok(str, delim);
	while(token != NULL)
	{
		_puts(token);
		_putchar('\n');
		token = strtok(NULL, delim);
	};
	return (0);
}
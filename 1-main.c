#include "holberton.h"
/**
 *main - prints argv without using argc
 *@argc: quantity of arguments
 *@argv: string arguments
 *Return: 0
 */
int main (int argc, char *argv[])
{
	int read;
	char *line = NULL;
	size_t len = 0;
	/*argv = "hola" "mundo" 0*/
	_puts("$ ");
	read =  getline(&line, &len, stdin);
	if (read == -1)
	{
		printf("Error");
		exit(2);
	}
	_puts(line);
	return (0);
}
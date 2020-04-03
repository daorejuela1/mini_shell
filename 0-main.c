#include "holberton.h"
/**
 *main - prints argv without using argc
 *@argc: quantity of arguments
 *@argv: string arguments
 *Return: 0
 */
int main (int argc, char *argv[])
{
	int i;
	/*argv = "hola" "mundo" 0*/
	for (i = 0; argv[i] != 0; i++)
	{
		printf("%s\n", argv[i]);
	}
}
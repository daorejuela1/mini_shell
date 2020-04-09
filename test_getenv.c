#include "holberton.h"
#include <stdio.h>

/**
 *main - prints the environ variable
 *Return: Always 0
 */
 int main(void)
 {
	char *variable;
	variable = _getenv("OLDPWD");
	printf("%s\n", variable);
    return (0);
 }
#include "holberton.h"
#include <stdio.h>

/**
 *main - prints the environ variable
 *Return: Always 0
 */
 int main(void)
 {
    extern char **environ;
    unsigned int i = 0;

    while (environ[i] != NULL)
    {
        printf("%s\n", environ[i]);
        i++;
    }
    return (0);
 }
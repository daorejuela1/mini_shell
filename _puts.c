#include "holberton.h"
/**
 * _puts - writes a string in stdout
 * @s: The string to print
 * Return: On length of characters written
 */
int _puts(char *s)
{
	int length;

	while (*(s + length))
		length++;
	return (write(1, s, length));
}
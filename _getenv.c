#include "holberton.h"
/**
 *_getenv - gets actual enviroment
 *@name: key of enviroment
 *Return: string with paths of environment
 */
char *_getenv(const char *name)
{
	extern char **environ;
	char *key = NULL;
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		key = strtok(environ[i], "=");
		if (strcmp(key, name) == 0)
		{
			key = strtok(NULL, "=");
			return (key);
		}
	}
	return (NULL);
}
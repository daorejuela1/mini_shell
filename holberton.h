#ifndef _HOLBERTON_H
#define _HOLBERTON_H
/*space to include libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
/*space for functions prototypes*/
int _putchar(char c);
int _puts(char *s);
char *_getenv(const char *name);
/*Structure definition*/
/**
 * struct path_dir - singly linked list
 * @direct: string with whole folder
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct path_dir
{
	char *str;
	unsigned int len;
	struct path_dir *next;
} path_dir_node;
#endif
#include "holberton.h"
#include <stdio.h>
/**
 */
 extern char *environ[];

 int main(int argc, char *argv[])
 {
     unsigned int i = 0;
     while (environ[i] != NULL)
    {
              printf("Enviroment:\n");
          i++;
    }
    return (0);
 }
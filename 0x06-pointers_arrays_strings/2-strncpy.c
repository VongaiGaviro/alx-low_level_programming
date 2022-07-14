#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: destination of a ponter to the string
 * @src: source of the pointer
 * @n: number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0' && a < n; a++)
		dest[a] = src[a];
	while (a < n)
		dest[a++] = '\0';
	return (dest);
}

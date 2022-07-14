#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @src: pointer to the source string
 * @dest: pointer to the destination string
 * @n: number of bytes
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	for (b = 0; dest[b] != '\0'; b++)
		;
	while (src[a] != '\0' && a < n)
	{
		dest[a + b] = src[a];
		a++;
	}
	return (dest);
}

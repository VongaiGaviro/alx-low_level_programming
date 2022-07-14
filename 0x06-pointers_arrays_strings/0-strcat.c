#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: the pointer to the destination string
 * @src: pointer to the source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	for (b = 0; dest[b] != '\0'; b++)
		;
	while (src[a] != '\0')
	{
		dest[b + a] = src[a];
		a++;
	}
	return (dest);
}

#include "main.h"
#include <stdio.h>

/**
 * _strcpy - cpoies of strings
 * @dest: pointer to a string
 * @src: pointer to a buffer
 * Return: dest value
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;

	}
	dest[i] = '\0';
	return (dest);
}

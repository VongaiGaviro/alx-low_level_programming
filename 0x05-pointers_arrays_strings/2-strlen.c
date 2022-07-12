#include "main.h"
#include <stdio.h>

/**
 * _strlen - calculates the length of a string
 * @s: pointer to the array
 * Return: length of the string
 */
int _strlen(char *s)
{
	int z;

	z = 0;
	while (*s != '\0')
	{
		z++;
		s++;
	}
	return (z);
}

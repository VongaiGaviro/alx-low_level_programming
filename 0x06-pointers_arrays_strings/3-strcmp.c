#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: the sttring to be compared to
 * Return: the difference between the first character and the second
 */
int _strcmp(char *s1, char *s2)
{
	int k;

	for (k = 0; s1[k] != '\0' && s2[k] != '\0' && s1[k] == s2[k]; k++)
		;
	return (s1[k] - s2[k]);
}

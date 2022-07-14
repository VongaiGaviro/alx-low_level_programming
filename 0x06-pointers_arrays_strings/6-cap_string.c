#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string.
 * @c: pointer to input string.
 * Return: capitalised string
 */
char *cap_string(char *c)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	i = 1;
	if (c[0] >= 'a' && c[0] <= 'z')
		c[0] -= ('a' - 'A');
	while (c[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
			if (c[i - 1] == sep[j] && (c[i] >= 'a' && c[i] <= 'z'))
				c[i] -= ('a' - 'A');
		i++;
	}
	return (c);
}

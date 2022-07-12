#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: input string
 */
void rev_string(char *s)
{
	int a, b;
	char z[1000];

	a = b = 0;
	while (s[a] != '\0')
	{
		z[a] = s[a];
		a++;
	}
	a--;
	while (a >= 0)
	{
		s[a] = z[b];
		a--;
		b++;
	}
	s[b++] = '\0';
}

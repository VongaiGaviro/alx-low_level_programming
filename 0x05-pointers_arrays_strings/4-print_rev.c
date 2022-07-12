#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the sting to be printed
 * Return: 0
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}

#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints out every character on the string
 * @str: input string
 * Return: string
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;
	len -= 1;
	for (; i <= len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}

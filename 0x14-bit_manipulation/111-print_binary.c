#include "main.h"

/**
 * dec2bin - convert dec to binary
 * @n: digit to be printed in binary form
 * @buffer: buffer to hold the converted decimal to binary
 */

void dec2bin(unsigned long int n, char *buffer)
{
	char res[32];
	int i = 0;

	while (n)
	{
		if (n & 1)
			res[i++] = '1';
		else
			res[i++] = '0';
		n >>= 1;
	}
	res[i--] = '\0';

	while (res[i] && i >= 0)
	{
		*buffer++ = res[i];
		i--;
	}
	*buffer = '\0';
}

/**
 * print_binary - print binary
 * @n: decimal digit to be converted to binary
 */

void print_binary(unsigned long int n)
{
	char buf[32];
	int i = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	dec2bin(n, buf);

	while (buf[i])
	{
		putchar(buf[i++]);
	}
}

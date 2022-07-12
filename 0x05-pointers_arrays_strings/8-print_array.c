#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an array up to n
 * @a: array of elements
 * @n: the number of elements in the array
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	putchar('\n');
}

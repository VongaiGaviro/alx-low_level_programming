#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses a string of integers
 * @a: the array to be reversed
 * @n: the size of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = temp = 0;
	n -= 1;
	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}

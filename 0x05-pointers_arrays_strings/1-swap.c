#include "main.h"
#include <stdio.h>

/**
 * swap_int - switches the value of first input with the input of the second
 * @a: the first integer
 * @b: the second integer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

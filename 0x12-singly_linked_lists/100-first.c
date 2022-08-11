#include <stdio.h>

void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - function runs before main function
 */

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\nI");
	printf(" bore my house upon my back!\n");
}

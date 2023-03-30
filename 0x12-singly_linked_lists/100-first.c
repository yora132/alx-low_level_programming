#include<stdio.h>

/**
 * myStartUp - Apply the constructor attribute to myStartupFun() so that it
 *   is executed before main()
 */
void myStartUp(void) __attribute__ ((constructor));

/**
 * myStartUp - implementation of myStartupFun
 */
void myStartUp(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}


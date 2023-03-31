#include <stdio.h>

void myConstuct(void) __attribute__ ((constructor));

/**
  * myConstuct - conctructor function to execute before main
  */

void myConstuct(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

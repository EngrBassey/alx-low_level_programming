#include <stdio.h>

/**
  * firsFun - function to exce in main
  * excecuted before main()
  */

void firsFun(void) __attribute__((constructor)); 

/**
  * firsFun - the function to excecute
 */

void firsFun(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

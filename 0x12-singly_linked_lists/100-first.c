#include <stdio.h>
#include <unistd.h>

void start(void) __attribute__((constructor));

/**
 * start - start executes before main
 * and prints the contents.
 */

void start(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

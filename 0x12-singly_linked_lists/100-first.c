#include "lists.h"

void pre_main_message(void) __attribute__((constructor));
/**
 * pre_main_message - constructor function
 * Return: void
 */

void pre_main_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

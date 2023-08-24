#include <stdio.h>


void __attribute__((constructor)) print_before_main(void);

/**
 * print_before_main - prints before main function
 *
 *
 * Return: none
 */

void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	/* Creating variables for the respective data types */
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	/* Printing out the size of each data type using sizeof */

	printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(e));


	return (0);
}

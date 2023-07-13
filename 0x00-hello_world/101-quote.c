#include <stdio.h>
#include <unistd.h>


/**
 * main - Entry point
 *
 * Return: 1
 */
int main(void)
{
	char message[] = "and that piece of art is useful\" - "
		"Dora Korpar, "
		"2015-10-19\n";

	/* Excluding the null-terminating character */
	write(2, message, sizeof(message) - 1);
	return (1);

}



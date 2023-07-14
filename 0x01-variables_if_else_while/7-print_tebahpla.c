#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{

	int letter;

	/* Using for loop to achieve the result */
	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);


}

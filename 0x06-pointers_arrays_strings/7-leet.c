#include "main.h"

/**
 * leet - encodes a string into 1337
 * @t: string
 *
 * Return: t
 */

char *leet(char *t)
{
	int i, j;
	char letters[] = "aeotlAEOTL";
	char num[] = "4307143071";

	i = 0;

	while (*(t + i) != '\0')
	{
		j = 0;

		while (j <= 9)
		{
			if (*(t + i) == letters[j])
			{
				*(t + i) = num[j];
			}
			j++;
		}
		i++;
	}
	return (t);
}

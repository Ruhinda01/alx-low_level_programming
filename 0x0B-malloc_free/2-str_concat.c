#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: combined
 */

char *str_concat(char *s1, char *s2)
{
	char *combined;
	int i;
	int j;
	int total;
	int length1;
	int length2;

	length1 = 0;
	length2 = 0;

	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		length1 = length1 + 1;
	for (i = 0; s2[i] != '\0'; i++)
		length2 = length2 + 1;

	total = length1 + length2 + 1;

	combined = (char *)malloc(total * sizeof(char));

	if (combined == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		combined[i] = s1[i];
	for (j = 0; j < length2; j++)
		combined[length1 + j] = s2[j];
	combined[length1 + j] = '\0';
	return (combined);
}

#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: first bytes of s2
 *
 * Return: combined
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *combined;
	unsigned int i, j, len1, len2, total_len;

	len1 = 0;
	len2 = 0;
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{

	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{

	}
	if (len1 == 0 || len2  == 0)
		return (NULL);
	if (n >= len2)
	{
		total_len = len1 + len2;
	}
	else
	{
		total_len = len1 + n;
	}
	combined = (char *)malloc((total_len + 1) * sizeof(char));
	if (combined == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		combined[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		combined[i + j] = s2[j];
	}
	combined[i + j] = '\0';
	return (combined);
}

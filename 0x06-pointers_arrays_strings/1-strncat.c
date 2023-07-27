#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n:number of elements in the source string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	j = 0;

	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	*(dest + i + j) = '\0';

	return (dest);
}

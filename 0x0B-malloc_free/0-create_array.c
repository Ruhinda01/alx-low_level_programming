#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a char
 * @size: size of array
 * @c: character which will be used to initialise the array
 *
 * Return: str
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = (char *)malloc(size * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i <= size - 1)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

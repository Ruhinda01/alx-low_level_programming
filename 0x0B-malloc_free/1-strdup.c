#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of the string str
 * @str: original string
 *
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i;
	int length;
	char *duplicate;


	length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		length = length + 1;
	}

	duplicate = (char *)malloc(length * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i <= length)
	{
		duplicate[i] = str[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

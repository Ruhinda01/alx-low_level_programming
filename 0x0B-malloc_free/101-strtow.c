#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - splits a string into words
 * @str: string to be split
 *
 * Return: s
 */

char **strtow(char *str)
{
	int len;
	int i;
	int j = 0;
	char *s;
	char **result;


	len = 0;
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
	{
	}
	len = len + 1;
	s = (char *)malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);

	result = (char **)malloc(sizeof(char *));
	if (result == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i < len ; i++)
	{
		if (str[i] != ' ')
		{
			s[j] = str[i];
			j++;
		}
		else
		{
			s[i] = '\n';
			j++;
		}
	}
	s[j] = '\0';
	result[0] = s;
	result[1] = NULL;
	return (result);
}

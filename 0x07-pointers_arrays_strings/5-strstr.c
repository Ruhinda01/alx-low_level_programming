#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: string to be compared
 *
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	j = 0;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}

		i++;
	}
	return (0);

}

#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer
 * @c: character to be found
 *
 * Return: s if first occurence of character or NULL if not found
 */

char *_strchr(char *s, char c)
{
	
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (0);
}

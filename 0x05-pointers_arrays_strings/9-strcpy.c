#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to the buffer
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}

#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * string_dup - duplicate a string from source to destination
 * @src: source file
 * Return: dest
 */
char *string_dup(char *src)
{
	int len, i;
	char *dest;

	if (src == NULL)
		return (NULL);
	for (len = 0; src[len] != '\0'; len++)
	{
	}
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner name
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_pup;
	char *name_dup;
	char *owner_dup;

	new_pup = malloc(sizeof(dog_t));
	if (new_pup == NULL)
		return (NULL);
	name_dup = string_dup(name);
	if (name_dup == NULL)
	{
		free(new_pup);
		return (NULL);
	}
	owner_dup = string_dup(owner);
	if (owner_dup == NULL)
	{
		free(name_dup);
		free(new_pup);
		return (NULL);
	}
	(*new_pup).name = name_dup;
	(*new_pup).age = age;
	(*new_pup).owner = owner_dup;
	return (new_pup);
}

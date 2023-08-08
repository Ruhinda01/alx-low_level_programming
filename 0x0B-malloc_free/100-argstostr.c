#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: index size of av
 * @av: array of pointers
 *
 * Return: new
 */

char *argstostr(int ac, char **av)
{
	int total = 0;
	char *arg;
	int i, j, k, len;

	k = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			len++;
		}
		total = total + len + 1;
	}
	arg = (char *)malloc(total * sizeof(char) + 1);
	if (arg == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			arg[k] = av[i][j];
			k++;
		}
		arg[k] = '\n';
		k++;
	}
	arg[k] = '\0';
	return (arg);
}

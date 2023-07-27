#include "main.h"

/**
 * cap_string - captializes all the words of a string
 * @m: string
 * Return: m
 */

char *cap_string(char *m)
{
	int i;


	while (m[i])
	{
		while (!(m[i] >= 'a' && m[i] <= 'z'))
		{
			i++;
		}

		if (m[i - 1] == ' ' ||
		    m[i - 1] == '\t' ||
		    m[i - 1] == '\n' ||
		    m[i - 1] == ',' ||
		    m[i - 1] == ';' ||
		    m[i - 1] == '.' ||
		    m[i - 1] == '!' ||
		    m[i - 1] == '?' ||
		    m[i - 1] == '"' ||
		    m[i - 1] == '(' ||
		    m[i - 1] == ')' ||
		    m[i - 1] == '{' ||
		    m[i - 1] == '}' ||
		    i == 0)
		{
			m[i] = (int)m[i] -  32;
		}
		i++;
	}
	return (m);
}



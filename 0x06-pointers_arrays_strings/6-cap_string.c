#include "main.h"

/**
 * cap_string - captializes all the words of a string
 * @m: string
 * Return: m
 */

char *cap_string(char *m)
{
	int i;

	i = 0;
	while (m[i] != '\0')
	{
		if (m[0] >= 97 && m[0] <= 122)
		{
			m[0] = m[0] - 32;
		}

		if (m[i] == ' ' ||
		    m[i] == '\t' ||
		    m[i] == '\n' ||
		    m[i] == ',' ||
		    m[i] == ';' ||
		    m[i] == '.' ||
		    m[i] == '!' ||
		    m[i] == '?' ||
		    m[i] == '"' ||
		    m[i] == '(' ||
		    m[i] == ')' ||
		    m[i] == '{' ||
		    m[i] == '}')
		{
			if  (m[i + 1] >= 97 && m[i + 1] <= 122)
			{
				m[i + 1] = m[i + 1] - 32;
			}
		}
		i++;
	}
	return (m);
}

#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - adds two integers
 * @n1: number 1
 * @n2: number 2
 * @r: buffer to store the result
 * @size_r: buffer size
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int flow = 0, i = 0, j = 0, number = 0;
	int val1 = 0, val2 = 0, tmp = 0;

	while (*(n1 + i) != '\0')
	{
		i++;
	}
	while (*(n2 + j) != '\0')
	{
		j++;
	}
	i--;
	j--;
	if (j >= size_r || i >= size_r)
	{
		return (0);
	}
	while (j >= 0 || i >= 0 || flow == 1)
	{
		if (i < 0)
		{
			val1 = 0;
		}
		else
		{
			val1 = *(n1 + i) - '0';
		}
		if (j < 0)
		{
			val2 = 0;
		}
		else
		{
			val2 = *(n2 + j) - '0';
		}
		tmp = val1 + val2 + flow;
		if (tmp >= 10)
		{
			flow = 1;
		}
		else
		{
			flow = 0;
		}
		if (number >= (size_r - 1))
		{
			return (0);
		}
		*(r + number) = (tmp % 10) + '0';
		number++;
		j--;
		i--;
	}
	if (number == size_r)
	{
		return (0);
	}
	*(r + number) = '\0';
	rev_string(r);
	return (r);
}


#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string
 *
 * Return: str
 */

char *rot13(char *str)
{
	int x;
	int y;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	x = 0;

	while (str[x] != '\0')
	{
		y = 0;
		while (y < 52)
		{
			if (str[x] == in[y])
			{
				str[x] = out[y];
				break;
			}
			y++;
		}
		x++;
	}
	return (str);
}

#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: contains the characters to be checked
 * Return: 1 - is a letter, lowercase or uppercase or 0 - otherwise
 */

int _isalpha(int c)
{
	if  ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


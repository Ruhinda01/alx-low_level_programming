#include "main.h"

/**
 * check_string - supposed to check the string, character by character
 * @s: string
 * @start: index of array starting from zero
 * @end: length of the string - 1
 *
 * Return: 1 if palindrome and 0 if not
 */

int check_string(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] == s[end])
	{
		return (check_string(s, start + 1, end - 1));
	}
	else
	{
		return (0);
	}
}
/**
 * string_length - length of the string
 * @s: string
 *
 * Return: len
 */

int string_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + string_length(s + 1));
}
/**
 * is_palindrome - return 1 if string is a palindrome and 0 if not
 * @s: string
 *
 * Return: 1 if palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int len;


	len = string_length(s);
	if (len == 0 || len == 1)
	{
		return (1);
	}
	else
	{
		return (check_string(s, 0, len - 1));
	}
}

#include "main.h"
/**
 * _strlen - string length
 * @s: string;
 *
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: string
 * Return: 1 for suceess -1 fail
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t written;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		written = write(file, text_content, _strlen(text_content));
		if (written == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}

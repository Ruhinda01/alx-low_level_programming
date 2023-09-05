#include "main.h"
/**
 * _strlen - sting length
 * @s: string
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
 * append_text_to_file - appends text to EOF
 * @filename: file
 * @text_content: string
 * Return: 1 success or -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t written;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(file);
		return (-1);
	}
	else
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

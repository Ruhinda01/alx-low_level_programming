#include "main.h"
/**
 * read_textfile - reads the test file and prints it
 * @filename: file
 * @letters: number of letters it should print and read
 * Return: the actual number of letter it could print and read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file;
	ssize_t Read, written;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDWR);
	if (file == -1)
		return (0);
	buffer = (char *)malloc(letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	Read = read(file, buffer, letters);
	if (Read == -1)
	{
		close(file);
		free(buffer);
		return (0);
	}
	written = write(STDOUT_FILENO, buffer, (size_t)Read);
	if (written == -1 || written != Read)
	{
		close(file);
		free(buffer);
		return (0);
	}
	close(file);
	free(buffer);
	return (written);
}

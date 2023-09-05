#include "main.h"
#define BUF_SIZE 1024
/**
 * openSrcFile - open source file
 * @src: source file
 * Return: source
 */
int openSrcFile(const char *src)
{
	int source = open(src, O_RDONLY);

	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	return (source);
}
/**
 * openDestFile - opens dest file
 * @dest: dest file
 * Return: destination
 */
int openDestFile(const char *dest)
{
	int destination = open(dest, O_WRONLY | O_TRUNC | O_CREAT, 0664);

	if (destination == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
	}
	return (destination);
}
/**
 * copyFile - copies files from source to destination
 * @source: source file descriptor
 * @destination: destination file descriptor
 * @src: source name
 * @dest: dest name
 * Return: none
 */
void copyFile(int source, int destination, const char *src, const char *dest)
{
	ssize_t Read, written, remaining;
	char buffer[BUF_SIZE];
	char *writePtr;

	while ((Read = read(source, buffer, sizeof(buffer))) > 0)
	{
		writePtr = buffer;
		remaining = Read;
		while ((written = write(destination, writePtr, remaining)) > 0)
		{
			remaining = remaining - written;
			writePtr = writePtr + written;
			if (remaining == 0)
				break;
		}
		if (written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			close(source);
			close(destination);
			exit(99);
		}
	}
	if (Read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", src);
		close(source);
		exit(98);
	}
	if (close(source) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", source);
		exit(100);
	}
	if (close(destination) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", destination);
		exit(100);
	}
}
/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments from terminal
 * Return: 0
 */
int main(int argc, char *argv[])
{
	const char *src, *dest;
	int source, destination;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file to\n");
		exit(97);
	}
	src = argv[1];
	dest = argv[2];
	source = openSrcFile(src);
	destination = openDestFile(dest);
	copyFile(source, destination, src, dest);

	return (0);
}

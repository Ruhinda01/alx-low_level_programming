#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int minAscii = 33;
	int maxAscii = 126;
	int passwordLength = 10;
	int i;
	int randomAscii;


	srand(time(NULL));

	char password[passwordLength + 1];

	for (i = 0; i < passwordLength; i++)
	{
		randomAscii = minAscii + rand() % (maxAscii - minAscii + 1);
		password[i] = (char)randomAscii;
	}
	password[passwordLength] = '\0';

	printf("%s\n", password);

	return (0);
}

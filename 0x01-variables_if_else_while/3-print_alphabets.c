#include <stdio.h>

/**
 * main - entry point
 *
 * description - prints letters in uppercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char uppercase;
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');

	return (0);
}


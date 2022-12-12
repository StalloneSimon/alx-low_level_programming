#include <stdio.h>

/**
 * main - entry point
 *
 * description - prints letters in lowercase on reverse
 *
 * Return: Always 0.
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'z'; lowercase >= 'a'; lowercase--)
		putchar(lowercase);

	putchar('\n');

	return (0);
}


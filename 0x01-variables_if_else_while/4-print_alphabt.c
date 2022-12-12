#include <stdio.h>

/**
 * main - entry point
 *
 * description - prints letters in lowercase
 *		with new line after each
 * Return: Always 0.
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)

		if (lowercase != 'e' && lowercase != 'q')

		putchar(lowercase);

	putchar('\n');

	return (0);
}

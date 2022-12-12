#include <stdio.h>
/**
 * main - entry point
 *
 * description - The program prints no.s to base 10
 *		using putchar with no char vars or printf.
 *
 * Return: Always 0.
 */
int main(void)
{
	int baseten;

	for (baseten = 0; baseten < 10; baseten++)
		putchar((baseten % 10) + '0');

	putchar('\n');
	return (0);
}

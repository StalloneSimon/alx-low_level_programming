#include "main.h"

/**
 * rev_string - reverse string and prints it
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int length = 0, i;
	char temp;

	while (s[i++])
		length++;

	for (i = length - 1; i >= length / 2; i--)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}

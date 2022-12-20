#include "main.h"

/**
 * rev_string - reverse string and prints it
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int length = 0;
	char temp = s[0];
	int i;

	while (s[length] != '\0')
		length++;

	for (i = 0; i < length; i++)
	{
		length--;
		temp = s[i];
		s[i] = s[length];
		s[length] = temp;
	}
}

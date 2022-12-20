#include "main.h"

/**
 * _strlen - prints the length of string
 * @s: string in evaluation to get length of
 *
 * Return: length of @s.
 */
size_t _strlen(const char *s)
{
	size_t length = 0;

	while (*s++)
		length++;

	return (length);
}

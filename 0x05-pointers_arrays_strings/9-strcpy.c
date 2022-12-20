#include "main.h"

/**
 * _strcpy - Copies poited string by @src including
 * the terminating null byte to buffer pointed by @dest
 *
 * @dest: buffer to copy string to
 * @src: the source string to copy
 *
 * Return: A pointer to dest.
 */
char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

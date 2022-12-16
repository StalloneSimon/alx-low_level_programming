#include "main.h"
/**
 * _isalpha - checks whether parameter is char and
 *	if lowercase or uppercase
 *@c: the char were checking
 * Return: 1 if lowercase or uppercase else return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

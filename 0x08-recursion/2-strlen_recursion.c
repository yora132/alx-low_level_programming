#include "main.h"

/**
 * _strlen_recursion - print the length of a string
 * @s: a string to be checked
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}

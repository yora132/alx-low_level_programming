#include "main.h"
/**
 * _strlen - descrption return length of string
 *
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

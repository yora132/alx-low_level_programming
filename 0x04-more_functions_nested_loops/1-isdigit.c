#include "main.h"
/**
 * _isdigit - checks for lowercase character
 *
 * @c: the character to be checked
 *
 *  Return: 1 if c is digit from 1 to 9, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}

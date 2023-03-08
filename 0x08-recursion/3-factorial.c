#include "main.h"

/**
 * factorial - prints a factorial of a number
 * @n: input number
 *
 * Return: if n < 0 return -1 error else reslut
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		n *= factorial(n - 1);
	}
	return (n);
}

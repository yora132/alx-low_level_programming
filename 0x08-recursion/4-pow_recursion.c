#include "main.h"

/**
 * _pow_recursion - prints integer power to integer
 * @x: input integer
 * @y: input power integer
 *
 * Returrn: result of x raised to the power of y, or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		x *=  _pow_recursion(x, y - 1);
	}
	return (x);
}

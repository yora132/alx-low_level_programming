#include "main.h"

/**
 * print_line - descrption print line
 * @n: the number of _ charctes
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
		_putchar('_');
		}
	}
	_putchar('\n');
}

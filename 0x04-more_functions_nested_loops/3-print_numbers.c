#include "main.h"

/**
 * print_numbers - descrption prit numbers
 *
 * return: 0 (scusses)
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
	return (0);
}

#include "main.h"

/**
 * flip_bits - filp the bits
 * @n:first number
 * @m:second number
 * Return:the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int diff;

	diff = n ^ m;

	while (diff != 0)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}

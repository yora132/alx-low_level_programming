#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b:pointing to a string of 0 and 1 chars
 *
 * Return:the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			result <<= 1;
		}
		else if (b[i] == '1')
		{
			result <<= 1;
			result |= 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}

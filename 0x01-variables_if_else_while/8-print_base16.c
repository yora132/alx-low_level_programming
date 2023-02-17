#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the nubers inbase 16
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'a';

	int c;

	(c = 0);
	while (c <= 9)
	{
		putchar(c + '0');
		c++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);

}

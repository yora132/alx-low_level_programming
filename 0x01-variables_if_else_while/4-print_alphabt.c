#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet excpet e q
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if ((c == 'q' && c == 'e') && c <= 'z')
		{
			continue;
		}
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);

}

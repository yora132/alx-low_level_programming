#include <stdio.h>

/**
 * main - Entry point
 * Description: prints numbera from 1 to 9
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 100; a++)
	{
		putchar(a + '0');
		if (a < 10)
		{
			putchar('0');
		}
		if (a != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}

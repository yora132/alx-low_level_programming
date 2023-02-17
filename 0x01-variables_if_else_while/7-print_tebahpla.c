#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase\n
 * Return: Always 0 (success)
 */
int main(void)
{
	char i;

	i = 'z';
	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);

}

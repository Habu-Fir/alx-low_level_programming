#include <stdio.h>

/**
 * main - prints the numbers from 01 to 89
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, m;

	for (n = 48; n < 57; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			putchar(n);
			putchar(m);
			if (n != 56 || m != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

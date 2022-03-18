#include "main.h"


/**
 * main - print numbers, from 0 to 9
 * followed by nwq line
 *Return: Always 0.
*/
void print_number(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar("\n");
}


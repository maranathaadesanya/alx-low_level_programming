#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 10x.
 *
 * Return: 0 (on success)
 */

void more_numbers(void)
{
	char c;
	int l;

	for (l = 0; l < 10; l++)
	{
	for (c = 0; c <= 14; c++)
	{
	if (c > 9)
	_putchar((c / 10) + '0');
	_putchar((c % 10) + '0');
	}
	_putchar('\n');
	}
}


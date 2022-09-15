#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: takes in an integer
 *
 * Return: none (0n success)
 */

void print_diagonal(int n)
{
	int c, i;

	if (n <= 0)
	_putchar('\n');
	for (c = 0; c < n; c++)
	{
	for (i = 0; i <= c; i++)
	{
		if (c == i)
		{
		_putchar('\\');
		_putchar('\n');
		}
		else
		{
		_putchar(' ');
		}
	}
	}
}

#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: count of print
 * Return: straightline.
 */

void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
	_putchar('_');
	_putchar('\n');
}

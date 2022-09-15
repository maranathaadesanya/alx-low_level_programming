#include "main.h"

/**
 * print_triangle - prints a triangle to the terminal
 * @size: takes an integer for size of trangle
 *
 * Return: none
 */

void print_triangle(int size)
{
	int row, column, i;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (column = size - row; column > 1; column--)
			_putchar(' ');
		for (i = row + column; i >= 1; i--)
			_putchar('#');
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase.
 *
 * Return: 0 (on success)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

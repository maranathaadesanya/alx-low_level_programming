#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line.
 * @s: string
 * Return: 0 on success
 */

void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}

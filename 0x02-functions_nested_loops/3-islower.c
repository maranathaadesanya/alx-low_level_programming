#include "main.h"

/**
 * _islower - Checks for lowercase character.
 * @c: char type letter
 *
 * Return: 1 (if c is lowercase), 0 (if C is uppercase)
 */

int _islower(int c)
{
	if (c > 97 && c < 122)
		return (1);
	else
		return (0);
}

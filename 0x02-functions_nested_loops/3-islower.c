#include "main.h"

/**
 * _islower(int c) - Checks for lowercase character.
 *
 * Return: 1 (if c is lowercase)
 * Return: 0 (if C is uppercase)
 */

int _islower(int c)
{
	if (c > 97 && c < 122)
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _isdigit - checks for digit from 0 through 9.
 * @c: int type character
 * Return: 1 (if digit), 0 (if otherwise)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

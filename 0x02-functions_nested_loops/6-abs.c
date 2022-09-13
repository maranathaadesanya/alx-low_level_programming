#include "main.h"
/**
 * _abs - Computes the absolute value of an integer.
 * @i: int type number
 *
 * Return: 0 (on success)
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}
}

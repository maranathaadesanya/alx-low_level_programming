#include "main.h"

/**
 * string_toupper - converting string to upper case.
 * @x: string param
 *
 * Return: string.
 */

char *string_toupper(char *x)
{
	int a = 0;

	while (x[a])
	{
		if (x[a] >= 97 && x[a] <= 122)
			x[a] = x[a] - 32;
		a++;
	}
	return (x);
}

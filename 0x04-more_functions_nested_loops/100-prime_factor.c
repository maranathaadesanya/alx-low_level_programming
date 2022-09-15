#include <stdio.h>

/**
 * main - entry block
 * @void: no argument
 *
 * Return: 0 (on success)
 */

int main(void)
{
	long j, number = 612852475143;

	for (j = 2; j <= number; j++)
	{
		if (number % j == 0)
		{
			number = number / j;
			j--;
		}
	}
	printf("%lu\n", j);
	return (0);
}

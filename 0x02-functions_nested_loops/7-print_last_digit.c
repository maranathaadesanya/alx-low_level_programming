#include "main.h"

/**
 * print_last_digit - Print the last digit of a number.
 * @j: int type number
 *
 * Return: return value of last digit.
 */

int print_last_digit(int j)
{
int jk;

if (j < 0)
{
jk = -1 * (j % 10);
_putchar(jk + '0');
return (jk);
}
else
{
jk = j % 10;
_putchar(jk + '0');
return (jk);
}
}

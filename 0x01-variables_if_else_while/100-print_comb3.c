#include <stdio.h>

/**
 * main - Loop through variables a and b, printing digits.
 *
 * Return: print to stdout all possible different combinations of two digits
 */

int main(void)
{
int a = '0';
int b;

while (a <= '9')
{
b = a + 1;
while (b <= '9')
{
putchar(a);
putchar(b);
if (a == '8' && b == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
b++;
}
a++;
}
return (0);
}

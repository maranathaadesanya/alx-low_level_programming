#include <stdio.h>

/**
 * main - Entry block
 * @void: no argument
 *
 * Return: 0 (on success)
 */

int main(void)
{
char c;

for (c = 'z' ; c >= 'a'; c--)
putchar(c);
putchar('\n');
return (0);
}

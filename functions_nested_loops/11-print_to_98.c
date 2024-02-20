#include "main.h"

/**
*print_num - Fuck Betty
*@t: frick betty
*/
void print_num(int t)
{
char first;

first = t < 10 ? '\0' : ('0' + t / 10);
_putchar(first);
_putchar('0' + t % 10);
}

/**
*print_to_98 - returns the sign of a number
*@n: number to be checked
*/
void print_to_98(int n)
{
int i;

for (i = n; i < 99; i++)
{
print_num(n);
if (i == 98)
	continue;
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}

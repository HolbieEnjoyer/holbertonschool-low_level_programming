#include "main.h"

/**
*sign - returns the sign of a number
*@n: number to be checked
*Return: -1, 1 or 0
*/
int sign(int n)
{
return n < 0 ? n * -1 : n;
}

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
if (n == 98)
{
print_num(98);
_putchar('\n');
return;
}

int i;
int inc;

inc = sign(98 - n);
for (i = n; i != 98; i += inc)
{
print_num(n);
if (i == 98)
	continue;
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}

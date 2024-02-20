#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
*print_last_digit - Fuck Betty
*@n: parameter description(frick you betty)
*Return: I don't know and I don't even want to.
*/
int print_last_digit(int n)
{
if (n == INT_MIN)
{
_putchar('0' + 8);
return (8);
}

int abs;
int d;

abs = n < 0 ? n * -1 : n;
d = abs % 10;
_putchar('0' + d);
return (d);
}

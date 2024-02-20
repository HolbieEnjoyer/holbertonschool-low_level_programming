#include "main.h"

/**
*print_last_digit - Fuck Betty
*@n: parameter description(frick you betty)
*Return: I don't know and I don't even want to.
*/
int print_last_digit(int n)
{

int abs;
int d;

d = n % 10;
abs = d < 0 ? d * -1 : d;
_putchar('0' + d);
return (d);
}

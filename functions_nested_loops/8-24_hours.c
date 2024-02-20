#include "main.h"

/**
*print_timestamp - Fuck Betty
*@t: frick betty
*/
void print_timestamp(int t)
{
char first;

first = t < 10 ? '0' : ('0' + t / 10);
_putchar(first);
_putchar('0' + t % 10);
}

/**
*jack_bauer - Fuck Betty
*/
void jack_bauer(void)
{
int i;
int j;

for (j = 0; j < 24; j++)
{
for (i = 0; i < 60; i++)
{
print_timestamp(j);
_putchar(':');
print_timestamp(i);
_putchar('\n');
}
}
}

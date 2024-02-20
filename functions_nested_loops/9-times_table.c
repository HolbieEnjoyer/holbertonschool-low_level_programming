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
*times_table - Fuck Betty
*/
void times_table(void)
{
int i;
int j;

for (j = 0; j <= 9; j++)
{
for (i = 0; i <= 9; i++)
{
int num;

num = i * j;
print_num(num);
if (i < 9)
{
_putchar(',');
_putchar(' ');
if ((i + 1) * j < 10)
{
_putchar(' ');
}
}
}
_putchar('\n');
}
}

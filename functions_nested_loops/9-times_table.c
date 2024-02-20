#include "main.h"

/**
*sign - returns the sign of a number
*@n: number to be checked
*Return: -1, 1 or 0
*/
int sign(int n)
{
if (n < 0)
	return (-1);
else if (n > 0)
	return (1);
else
	return (0);
}

/**
*abs - returns the sign of a number
*@n: number to be checked
*Return: -1, 1 or 0
*/
int abs(int n)
{
return (n < 0 ? n * -1 : n);
}

/**
*print_num - Fuck Betty
*@t: frick betty
*/
void print_num(int t)
{
int num;
int dec;

if (t < 0)
	_putchar('-');
t = abs(t);

num = t;
dec = 1;

while (num >= 10)
{
dec *= 10;
num /= 10;
}

while (dec != 1)
{
_putchar('0' + (t / dec) % 10);
dec /= 10;
}
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

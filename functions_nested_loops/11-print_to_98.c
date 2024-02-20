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
	return(0);
}

/**
*abs - returns the sign of a number
*@n: number to be checked
*Return: -1, 1 or 0
*/
int abs(int n)
{
return n < 0 ? n * -1 : n;
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
*print_to_98 - returns the sign of a number
*@n: number to be checked
*/
void print_to_98(int n)
{
int i;
int inc;

if (n == 98)
{
print_num(98);
_putchar('\n');
return;
}

inc = sign(98 - n);
for (i = n; i != 98; i += inc)
{
print_num(i);
if (i == 98)
	continue;
_putchar(',');
_putchar(' ');
}
print_num(98);
_putchar('\n');
}

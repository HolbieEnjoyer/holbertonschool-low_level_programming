#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alpha(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
_putchar('\n');
}

int main(void)
{
print_alpha();
return (0);
}

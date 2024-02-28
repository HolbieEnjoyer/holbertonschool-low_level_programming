#include "main.h"

/**
 * _strlen - Entry point
 *
 * @s: variable
 * Return: Always 0.
 */
int _strlen(char *s)
{
int i;

while (s[i] != '\0')
    i++;

return i;
}

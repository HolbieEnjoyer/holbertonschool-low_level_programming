#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - Entry point
 *
 * @s: variable
 * Return: Always 0.
 */
int _strlen(char *s)
{
	char *p = s;

	while (*p != '\0')
		p++;
	return (p - s);
}

/**
 * _strdup - fills memory
 * @str: str
 *
 * Return: char
 */
char *_strdup(char *str)
{
	char *arr;
	int i, size;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str);
	arr = (char *)malloc(sizeof(char) * size + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';
	return (arr);
}

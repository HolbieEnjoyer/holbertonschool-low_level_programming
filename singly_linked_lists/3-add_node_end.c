#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to check.
 * Return: Length of the string.
 */
int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
		i++;

	return (i);
}

/**
 * add_node_end - check the code
 *
 * @head: var
 * @str: var
 *
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last;
	list_t *new_n = malloc(sizeof(list_t));

	if (new_n == NULL)
		return (NULL);

	new_n->str = strdup(str);
	new_n->len = _strlen(str);
	new_n->next = NULL;

	if (*head == NULL)
		*head = new_n;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_n;
	}

	return (new_n);
}

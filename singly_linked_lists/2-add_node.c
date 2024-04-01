#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: The string to check
 * Return: Always 0.
 */
int _strlen(const char *s) {
    int i;
    
    while (s[i] != 0)
        i++;
    
    return i;
}

/**
 * add_node - check the code
 *
 * @head: var
 * @str: var
 *
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_n;

	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);

	new_n->str = strdup(str);
	new_n->len = _strlen(str);
	new_n->next = *head;
	*head = new_n;

	return (new_n);
}

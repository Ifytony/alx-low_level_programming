#include "lists.h"
#include <stdlib.h>

/**
 * add_node - add a new node at the beginning of the linked list
 * @head: double pointer to the beginning of the linked list
 * @str: the string to add to the node
 *
 * Return: pointer to the new node, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int lenght = 0;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->len = lenght;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - fuction that deletes the node at index of
 * a linked list
 * @head: pointer to listint_t
 * @index: the index of the node to delete
 *
 * Return: 1 if true, or -1 if false
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *node;

	unsigned int i = 1;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (i < index)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
			i++;
		}
		node = temp;
		node = node->next;
		temp->next = node->next;
		free(node);
	}

	return (1);
}

#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: head of temp
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (!head)
		return;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	head = NULL;
}

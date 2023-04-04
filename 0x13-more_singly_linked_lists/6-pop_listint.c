#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: pointers to the first element in the linked list
 *
 * Return: 0 if the lists is empty,
 * or element of the list deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !(*head))
		return (0);

	temp = *head;
	num = temp->n;
	*head = (*head)->next;
	free(temp);

	return (num);
}

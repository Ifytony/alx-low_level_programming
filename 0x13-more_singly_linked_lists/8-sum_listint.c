#include "lists.h"
/**
 * sum_listint - function that return the sum of all data in a linked list
 * @head: first node in the linked list
 *
 * Return: calculated sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

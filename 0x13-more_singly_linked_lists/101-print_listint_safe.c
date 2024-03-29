#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list
 * @head: the first node of a linked list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int current;

	while (current)
	{
		current = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (current > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num);
}

/**
 * Author = ifytony
 * Date = 3rd of April 2023
 */

#include "lists.h"

/**
 * listint_len - return the number of elements in a linked lists
 * @h: linked list of type listint_t
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		s++;
		h = h->next;
	}

	return (s);
}

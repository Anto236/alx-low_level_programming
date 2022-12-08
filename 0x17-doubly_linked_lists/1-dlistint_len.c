#include "lists.h"
/**
 * dlistint_len - returns length of list
 *
 * @h: head of list
 *
 * Return: the length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
